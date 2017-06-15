#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putendl(char const *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

void	ft_putnbr_fd(int n, int fd);

int		main()
{
	ft_putendl("The function will take an integer (test integer: -500) and output it on the given file destination (given filedes: 1)");
	ft_putnbr_fd(-500, 1);
	ft_putendl("");
	return (0);
}
