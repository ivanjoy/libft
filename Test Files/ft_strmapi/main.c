#include <string.h>
#include <stdio.h>

char    ft_uptick(unsigned int i, char s)
{
    i++;
    return (s + 1);
}

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char));

int		main()
{
    printf("The function will take a string, apply a given function to every character in that string, and store teh changed character in a new string.\n");
    char    str[] = "testing";
    printf("The test function upticks each of the characters by 1.\n");
    printf("The test string is: %s.\n", str);
    char    *result = ft_strmapi(str, &ft_uptick);
    printf("The resultant string is: %s.\n", result);
	return (0);
}
