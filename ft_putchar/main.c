#include <string.h>
#include <stdio.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("The inputted character is: %c\n", argv[1][0]);
		ft_putchar(argv[1][0]);
		ft_putchar('\n');
	}
	else
		printf("Input a character and the function will print that character on the standard input.\n");
	return (0);
}
