#include "BitcoinExchange.hpp"

void BitcoinExchange::check_add_csv()
{
	std::ifstream readFile("data.csv");


	if (readFile.is_open() == 0)
		std::cout << "Error: cannot open file." << std::endl;
	else
	{
		std::string line;
		while (getline(readFile, line))
				add_data(line);
	}
}

void BitcoinExchange::check_txt(std::string argv)
{

	std::string nameFile = argv;
	std::ifstream file;

	file.open(nameFile.c_str());

	if (file.is_open() == 0)
		std::cout << "Error: cannot open file." << std::endl;
	else
	{
		std::string line;
		int firstline = 0;
		while (getline(file, line))
		{
			if (firstline == 0)
			{
				firstline = 1;
				if (line != "date | value")
					std::cout << "Error: bad input => " << line << std::endl;
			}
			else if (is_all_whitespace(line) == 1)
				continue;
			else if (check_date_txt(line) == 0)
				std::cout << "Error: bad input => " << line << std::endl;
			else if (check_coin_txt(line.substr(13)) != "OK")
				std::cout << "Error: " << check_coin_txt(line.substr(13)) << std::endl;
			else
				std::cout << line.substr(0,10) << " => " << line.substr(13) << " = " << find_coin(line) << std::endl;
		}
	}



}

std::string BitcoinExchange::check_coin_txt(std::string coin)
{
	// std::string badinput;
	std::stringstream ss(coin);
	float fcoin;
	ss >> fcoin;

	if (fcoin <= -1)
		return ("not a positive number.");
	else if (fcoin >= 1001)
		return ("too large a number.");
	else if (is_all_num(coin) == 0)
		return ("bad input => " + coin);
	return ("OK");
}

int BitcoinExchange::is_all_whitespace(std::string str)
{
	for (std::string::iterator it = str.begin() ; it != str.end() ; it++)
	{
		if (std::isspace((char)*it) == 0)
			return (0);
	}
	// for (size_t i = 0 ; i < str.length() ; i++)
	// {
	// 	if (std::isspace(str[i]) == 0)
	// 		return (0);
	// }
	return (1);
}

int BitcoinExchange::is_all_num(std::string str)
{
	size_t i = 0;
	while (i < str.length())
	{
		if ((std::isdigit(str[i]) != 1) && str[i] != '.')
			return (0);
		i++;
	}
	return (1);
}



float BitcoinExchange::find_coin(std::string line)
{
	std::map<std::string, float>::iterator it = _data.begin();
	int year_data, month_data, day_data;
	int year_find, month_find, day_find;

	float coin = it->second;
	while (it != _data.end())
	{
		year_data = atof((it->first).substr(0,4).c_str());
		month_data = atof((it->first).substr(5,2).c_str());
		day_data = atof((it->first).substr(8,2).c_str());
		year_find = atof((line.substr(0,4)).c_str());
		month_find = atof((line.substr(5,2)).c_str());
		day_find = atof((line.substr(8,2)).c_str());
		if (day_data != 0)
		{
			if ((day_find >= day_data))
			{
				if (month_find >= month_data)
				{
					if (year_find >= year_data)
						coin = it->second;
				}

			}
		}

		it++;
	}
	std::stringstream ss(line.substr(13));
	float coin_data;
	ss >> coin_data;
	return (coin * coin_data);
}



int BitcoinExchange::check_date_txt(std::string line)
{
	if (line[4] != '-' || line[7] != '-')
		return (0);
	else if (line[10] != ' ' || line[11] != '|' || line[12] != ' ')
		return (0);
	for (int i = 0 ; i <= 3 ; i++)
	{
		if (line[i] > '9' || line[i] < '0')
			return (0);
	}
	for (int i = 5 ; i <= 6 ; i++)
	{
		if (line[i] > '9' || line[i] < '0')
			return (0);
	}
	for (int i = 8 ; i <= 9 ; i++)
	{
		if (line[i] > '9' || line[i] < '0')
			return (0);
	}
	return (1);
}


void BitcoinExchange::add_data(std::string line)
{
		_data.insert(std::make_pair(line.substr(0,10),atof(line.substr(11).c_str())));
}

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy)
{
	*this = cpy;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &cpy)
{
	_data = cpy._data;
	return (*this);
}

const std::map<std::string, float> & BitcoinExchange::getData()const
{
	return (_data);
}


