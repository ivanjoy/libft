#include <string.h>
#include <stdio.h>

char	*ft_strjoin(const char *s1, const char *s2);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("The inputted strings are: %s and %s\n", argv[1], argv[2]);
		char *result = ft_strjoin(argv[1], argv[2]);
		printf("The resultant string is: %s\n", result);
	}
	else
		printf("Input two strings.  The function will combine the two strings into a single string.\n");
	return (0);
}
