#include <iostream>

void	toUpper(char **str)
{
	int	i;

	i = 0;
	while((*str)[i])
	{
		if((*str)[i] >= 97 && (*str)[i] <= 122)
			(*str)[i] -= 32;
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		int	i;

		i = 1;
		while(argv[i])
		{
			toUpper(&argv[i]);
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
