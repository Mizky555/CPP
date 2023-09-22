#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact
{
	private:
		// int	index;
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	secret;
	public:
		// Contact(void);
		// ~Contact(void);
		void add_firstname(std::string str);
		void add_lastname(std::string str);
		void add_nickname(std::string str);
		void add_phonenumber(std::string str);
		void add_secret(std::string str);
		std::string get_firstname(void);
		std::string get_lastname(void);
		std::string get_nickname(void);
		std::string get_phonenumber(void);
		std::string get_secret(void);
};

#endif
