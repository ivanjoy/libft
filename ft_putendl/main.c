#include <string.h>
#include <stdio.h>

void	ft_putendl(char const *s);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putendl("The inputted string is: ");
		ft_putendl(argv[1]);
	}
	else
		printf("Please input a string.  The function will output that string onto the standard output followed by a new line character.\n");
	return (0);
}
