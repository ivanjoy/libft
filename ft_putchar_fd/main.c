#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putendl(char const *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

void	ft_putchar_fd(char c, int fd);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putendl("The inputted character will be displayed on output 1 below.");
		ft_putchar_fd(argv[1][0], 1);
		ft_putendl("");
	}
	else
		printf("please insert a character.  The function will output that character on the designated file destination (in this case, 1)\n");
	return (0);
}
