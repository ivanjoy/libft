#include <string.h>
#include <stdio.h>

char	*ft_itoa(int n);

int		main()
{
	int		i = -2431;
	printf("The function will take a test integer: %d and convert it to a string.\n", i);
	char *result = ft_itoa(i);
	printf("The resultant string is: %s.\n", result);
	return (0);
}
