#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include <sstream>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cctype>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _data;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &cpy);
		BitcoinExchange & operator=(const BitcoinExchange &cpy);

		void check_add_csv();
		void add_data(std::string line);
		void check_txt(std::string line);
		int check_input(std::string line);
		int max_year();
		const std::map<std::string, float> &getData() const;
		int change_coin(std::string line);
		float find_coin(std::string line);
		std::string check_coin_txt(std::string coin);
		int is_all_whitespace(std::string str);
};
#endif

