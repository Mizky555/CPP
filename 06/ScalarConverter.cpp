# include <cstdlib>
#include <iomanip>
#include <sstream>
#include <iostream>
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}
ScalarConverter::ScalarConverter(const ScalarConverter & cpy)
{
	*this = cpy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter & cpy)
{
	(void)cpy;
	return (*this);
}

void ScalarConverter::convert(std::string str)
{
	char *endptr;
	double number;

	number = std::strtod(str.c_str(), &endptr);
	convertChar(number);
	convertInt(number);
	convertFloat(number);
	convertDouble(number);

}

void ScalarConverter::convertChar(double number)
{
	char c;
	std::stringstream ss;
	if (isnan(number) == 1)//Not a number ไม่ใช่ตัวเลข
		std::cout << "char: impossible" << std::endl;
	else if (isprint(number) == 1)//อักขระที่พิมพ์ออกมาได้
	{
		c = static_cast<char>(number);
		ss << c;
		std::cout << "char: " << ss.str() << std::endl;
	}
	else
		std::cout << "char: Non displayable" << std::endl;
}

void ScalarConverter::convertInt(double number)
{
	if (isnan(number) == 1)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(number) << std::endl;
}
void ScalarConverter::convertFloat(double number)
{
	if (isnan(number) == 1)
		std::cout << "float: " << number << "f" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << number << "f" << std::endl;
}
void ScalarConverter::convertDouble(double number)
{
	if (isnan(number) == 1)
		std::cout << "double: " << number << std::endl;
	else
		std::cout << "double: " << std::fixed << std::setprecision(1) << number << std::endl;
}


