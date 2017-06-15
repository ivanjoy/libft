#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd);

void	ft_putendl(char const *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putendl("The inputted string will be displayed below on filedestination: 1.");
		ft_putstr_fd(argv[1], 1);
	}
	else
		printf("Please input a string.  The function will display the string on the given file destination (in this case: 1).\n");
	return (0);
}
