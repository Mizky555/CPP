#ifndef SED_HPP
# define SED_HPP

#include <iostream>
#include <sstream>
#include <fstream>

class Sed
{
	private:
		std::string	_filename; //variable attribute proptry
		std::string	_s1;
		std::string	_data;
		std::string	_s2;
		std::ifstream	_read;
		std::ofstream	_write;
	public:
		Sed(std::string pathName, std::string s1, std::string s2); //method constructor
		~Sed();//methoddeconstructor
		bool isOpen(); //method
		void readFile(); //method
		bool rePlace();
		bool outPut();
};

#endif

//function คือ การทำงาน
//method หรือ memberfunction คือ วิธีการทำงานของคลาส (เป็นฟังก์ชั่นที่อยู่ในคลาส)
//
