
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
	public:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter & cpy);
		ScalarConverter &operator=(const ScalarConverter & cpy);
		void convert(std::string str);
		void convertChar(double number);
		void convertFloat(double number);
		void convertInt(double number);
		void convertDouble(double number);
};


#endif
