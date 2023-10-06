#include <iostream>
#include <sstream>
#include "Sed.hpp"

Sed::Sed(std::string pathName, std::string s1, std::string s2)
: _filename(pathName), _s1(s1), _s2(s2), _read(pathName.c_str())
{
	std::cout << "constructor called" << std::endl;
}
Sed::~Sed()
{
	std::cout << "destructor called" << std::endl;
	_read.close();
	_write.close();
}

bool Sed::isOpen()
{
	return (_read.is_open());
}

void Sed::readFile()
{
	std::stringstream ss;

	ss << _read.rdbuf();//rdbuf (methob) ไว้คืนbufferของdataที่fileเก้บไว้
	ss >> _data; // _data = ss.str();
}

bool Sed::rePlace()
{
	if (_s1.empty())
	{
		std::cerr << "Error s1 is empty" << std::endl;
		return (1);
	}

	std::size_t pos = _data.find(_s1);// .find คืนค่าเป็น index ของตัวที่หาเจอ (ถ้า data.find หาค่าใน s1 ไม่เจอจะคืนค่าเป็น npos)

	while (pos != std::string::npos)
	{
		_data = _data.substr(0, pos) + _s2 + _data.substr(pos + _s1.size());//substr(s1, s2) คือ เอาค่าตั้งแต่ตัวที่ s1 จนถึงตัวที่ก่อน s2
		pos = pos + _s2.size();
		pos = _data.find(_s1, pos);
	}
	return (0);
}

bool Sed::outPut()
{
	std::string str = ".replace";
	_write.open((_filename + str).c_str());
	if (!_write.is_open())
	{
		std::cerr << "Error can not output." << std::endl;
		return (1);
	}
	_write << _data;
	return (0);
}
