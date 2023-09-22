#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class	PhoneBook
{
	private:
		Contact contacts[8];
		// int	index;
	public:
		void	add(int i);
		int	check_str(std::string str);
		int	check_digit(std::string str);
		void	search(int i);
		void	print(std::string str);
		void	open_data(void);

};

# endif
