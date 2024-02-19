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
		{
			// std::cout << "line " << line[0] << std::endl;

			add_data(line);
		}
		// for (std::map<std::string, float>::iterator it = _data.begin(); it != _data.end(); ++it)
        	// std::cout << it->first << " === " << it->second << std::endl;
	}
}

void BitcoinExchange::check_txt(std::string argv)
{

	std::string nameFile = argv;
	std::ifstream readFile(nameFile);

	if (readFile.is_open() == 0)
		std::cout << "Error: cannot open file." << std::endl;
	else
	{
		std::string line;
		int firstline = 0;
		while (getline(readFile, line))
		{
			if (firstline == 0)
			{
				firstline = 1;
				if (line == "date | value")
					continue;
			}
			else
				std::cout << "Error: bad input => " << line << std::endl;
			for (int i = 0 ; line[i] ; i++)
			{
				// std::cout << line[10] << line[11] << line[12] << "---" << std::endl;
				if (line[4] != '-' || line[7] != '-')
				{
					std::cout << "1Error: bad input => " << line << std::endl;
					break;
				}
				else if (line[10] != ' ' || line[11] != '|' || line[12] != ' ')
				{
					std::cout << "2Error: bad input => " << line << std::endl;
					break;
				}
				else if (check_date(line) == 0)
				{
					std::cout << "3Error: bad input => " << line << std::endl;
					break;
				}
				else
				{
					std::cout << "OK " << line << std::endl;
					break;
				}
			}
				// break;

		}
	}
	// (void) argv;
	// std::map<std::string, float>::iterator it = _data.begin();
	// while (it != _data.end())
	// {
	// 	std::cout << "1 = " << it->first << " | 2 = " << it->second << std::endl;
	// 	++it;
	// }

	// 	// for (std::map<std::string, float>::iterator it = _data.begin(); it != _data.end(); ++it)
    //     	// std::cout << it->first << " === " << it->second << std::endl;
	// }


}

int BitcoinExchange::check_date(std::string line)
{
	// int date;

	for (int i = 0 ; i <= 3 ; i++)
	{
		// std::cout << "==== " << line[i] << std::endl;
		if (line[i] > '9' || line[i] < '0')
		{
			return (0);
		}
	}
	for (int i = 5 ; i <= 6 ; i++)
	{
		if (line[i] > '9' || line[i] < '0')
		{
			return (0);
		}

	}
	for (int i = 8 ; i <= 9 ; i++)
	{
		if (line[i] > '9' || line[i] < '0')
		{
			return (0);
		}
	}

	// date = atoi(line.substr(0, 4).c_str());
	// std::cout << "test " << date << std::endl;
	return (1);
}


void BitcoinExchange::add_data(std::string line)
{
	_data.insert(std::make_pair(line.substr(0,10),atof(line.substr(11).c_str())));
	// std::cout << "sub_str : " << line.substr(0,10) << std::endl; date
	// std::cout << "sub_str : " << line.substr(11) << std::endl; price
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


