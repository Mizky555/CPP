#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class	PhoneBook
{
	private:
		Contact contacts[8];
		// int	index;
	public:
		void	add(void);
		int	check_str(std::string str);
		int	check_digit(std::string str);

};

# endif
