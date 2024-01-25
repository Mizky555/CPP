#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

struct Param
{
	std::string	a;
	int			b;
	int			c;
};

// void	testForm()
// {
// 	Param	param[] = {
// 		{"Warrior", 180, 20},};
// 		// {"Archer", 20, 0},
// 		// {"Mage", 151, 20},
// 		// {"Acolyte", 20, 151},
// 		// {"Merchant", 0, 0},
// 		// {"Thief", 151, 151}};
// 	for (int i = 0; i < 1; i++)
// 	{
// 		try
// 		{
// 			Form	form(param[i].a, param[i].b, param[i].c);
// 		}
// 		catch (std::exception & e)
// 		{
// 			std::cout << e.what() << std::endl;
// 		}
// 	}
// }

int	main(void)
{
	// testForm();
	std::cout << std::endl;
	try
	{
		Form		form("Warrior", 30, 20);
		Bureaucrat	obj1("Mark", 30);
		Bureaucrat	obj2("Mos", 31);

		std::cout << form << std::endl;
		std::cout << obj1 << std::endl;
		std::cout << obj2 << std::endl;

		obj1.getSigned(form);
		std::cout << form << std::endl;
		obj2.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
// int main()
// {
// 	std::cout << BMAG << "\n---- TEST 0 ----" << RESET << std::endl;
// 	std::cout << BYEL << "case : Normal assign" << RESET << std::endl;
// 	Form sheet0;
// 	Form sheet1("A", 75, 50);
// 	Form sheet2(sheet0);
// 	Form sheet3 = sheet1;
// 	std::cout << sheet0;
// 	std::cout << sheet1;
// 	std::cout << sheet2;
// 	std::cout << sheet3;
// }

