#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string weapon);
		~Weapon();
		const std::string &getType() const;
		void setType(std::string type);
};

#endif
