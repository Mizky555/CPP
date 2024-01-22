#include <iostream>
#include <exception>


class InputNumber {
	public:
		InputNumber(void) {
			// std::cout << "Hello InputNumber" << std::endl;
		};
		~InputNumber() {
			// std::cout << "Goodbye InputNumber" << std::endl;
		};

		int is_more_than_one(int numb) {
			if (numb > 1){
				throw MoreThanOne();
				return 0;
			}
			return numb;
		}
		class MoreThanOne: public std::exception {
			public:
				const char * what() const throw() {
					return "ERROR: more than one";
				}
		};
};


// int is_more_than_one(int numb) {
// 	if (numb > 1){
// 		std::cout << "is more than one" << std::endl;
// 		return 0;
// 	}
// 	std::cout << "IS Less than one" <<std::endl;
// 	return 1;
// }




int main() {
	InputNumber test;
	std::string buff;
	int	inp = 0;

	std::cout << "Input number less equal than one" << std::endl;
	if (std::getline(std::cin, buff)) {
		inp = std::stoi(buff);
		std::system("clear");
	}
	try {
		std::cout << "Before do something" <<std::endl;
		int ret =  test.is_more_than_one(inp);
		std::cout << "Input is : " << ret << std::endl;
		std::cout << "after do something" << std::endl;
		// something

	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
