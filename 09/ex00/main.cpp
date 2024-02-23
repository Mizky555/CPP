#include "BitcoinExchange.hpp"

//2009-01-02 - 2022-03-29

int main(int argc, char **argv)
{
	BitcoinExchange bitcoinex;
	
	if (argc != 2)
		std::cout << "argc != 2" << std::endl;
	bitcoinex.check_add_csv();
	bitcoinex.check_txt(argv[1]);

	return (0);
}

