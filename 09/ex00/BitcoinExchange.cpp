/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   BitcoinExchange.cpp								:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: bschwitz <marvin@42lausanne.ch>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/06/26 15:16:22 by bschwitz		  #+#	#+#			 */
/*   Updated: 2023/06/26 18:00:07 by bschwitz		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


//contructor destructor

Bitcoin::Bitcoin(std::string filename)
{
	std::ifstream	file(filename.c_str());
	std::string		line;
	
	std::getline(file, line);

	while (std::getline(file, line))
	{
		try
		{
			std::string::size_type	delimiter = line.find(",");
			if (delimiter == std::string::npos)
				throw BadInput();

			std::string	date = line.substr(0, delimiter);
			std::string	rate_str = line.substr(delimiter + 1);

			double rate;
			std::istringstream rate_stream(rate_str);
			if (!(rate_stream >> rate))
				throw WrongRate();
			
			_data[date] = rate;
			//std::cout << "_data[" << date << "] = " << rate << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}


Bitcoin::~Bitcoin()
{}


//membre funtions

bool	Bitcoin::ValidDate(const std::string date)
{
	std::string::size_type del1 = date.find('-');
	std::string::size_type del2 = date.rfind('-');

	if (del1 == std::string::npos || del1 == del2)
		return false;
	
	std::string year_str = date.substr(0, del1);
	std::string month_str = date.substr(del1 + 1, del2 - del1 - 1);
	std::string day_str = date.substr(del2 + 1);

	int year, month, day;
	std::istringstream year_ss(year_str), month_ss(month_str), day_ss(day_str);

	if (!(year_ss >> year) || !(month_ss >> month) || !(day_ss >> day))
		return false;
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;
	if (month == 2 && ((day > 29 && Bissextille(year)) || (day > 28 && !Bissextille(year))))
		return false;
	
	return true;
}

bool	Bitcoin::ValidValue(const double value)
{
	if (value < 0 || value > 1000)
		return false;
	return true;
}


double	Bitcoin::getRate(const std::string date)
{
	std::string	closest = "";

	for (std::map<std::string, double>::const_iterator it = _data.begin(); it != _data.end(); ++it)
	{
		const std::string &key = it->first;
		if (key < date && key > closest)
			closest = key;
	}
	if (!closest.empty())
		return _data.find(closest)->second;
	return _data.begin()->second;
}



void	Bitcoin::Exchange(const std::string filename)
{
	std::ifstream	file(filename.c_str());
	std::string		line;
	std::getline(file, line);
	
	while (std::getline(file, line))
	{
		std::istringstream	ss(line);
		std::string			date;
		double				value;
		char				delimiter;

		try
		{
			if (!(ss >> date >> delimiter >> value))
				throw BadInput();
			if (delimiter != '|')
				throw BadDelimiter();
			if (!ValidDate(date))
				throw WrongDate();
			if (!ValidValue(value))
				throw WrongValue();
			
			double	rate = getRate(date);
			std::cout << date << " => " << value << " = " << value * rate << std::endl;
			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

	}
}

// help functions

bool Bissextille(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return true;
			else
				return false;
		}
		else
			return true;
	}
	else
		return false;
}