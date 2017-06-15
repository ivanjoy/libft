#include <string.h>
#include <stdio.h>

void	ft_putstr(char const *s);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("The inputted string is: %s.\n", argv[1]);
		ft_putstr(argv[1]);
		ft_putstr("\n");
	}
	else
		printf("Input a string.  The function will display that string on the standard output.");
	return (0);
}
