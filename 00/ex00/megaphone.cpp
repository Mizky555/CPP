#include <iostream>

int	main(int argc, char **argv)
{
	int i = 1;
	int	j = 0;

	if (argc >= 2)
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					std::cout << char(toupper(argv[i][j]));
				else
					std::cout << argv[i][j];
				j++;
			}
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
