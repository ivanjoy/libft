#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putendl(char const *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

void	ft_putnbr(int n);

int		main()
{
	ft_putendl("The function is going to take a test integer (in this case: -500) and print it on the standard output.");
	ft_putnbr(-500);
	ft_putendl("");
	return (0);
}
