#include <string.h>
#include <stdio.h>

void	ft_putendl_fd(char const *s, int fd);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putendl_fd("The inputted string will be outputted below on the designated file destination (in this case: 1)", 1);
		ft_putendl_fd(argv[1], 1);
	}
	else
		ft_putendl_fd("Please input a string.  The function will output that string on the designated filedestination (in this case: 1) followed by a new line character.\n", 1);
	return (0);
}
