#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s);

int		main()
{
	printf("The function is going to accept a string with whitespace at the beginning and end of the string and return that same string with all of the leading and trailing whitespace trimmed off.\n");
	char str[] = "     this string has 5 spaces leading and trailing off of it     ";
	printf("The test string is: %s.\n", str);
	char *result = ft_strtrim(str);
	printf("This is the trimmed string: %s.\n", result);
	return (0);
}
