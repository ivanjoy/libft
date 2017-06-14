#include <string.h>
#include <stdio.h>

char    ft_uptick(char c)
{
    return (c + 1);
}

char    *ft_strmap(char const *s, char (*f)(char));

int		main()
{
    printf("The function is will take a string, apply a test function to it, and create a new string with the return of the inputted function.");
    char    str[] = "testing";
    printf("The function adds 1 to the character value of any character sent to it.\n");
    printf("The test string is: %s.\n", str);
    char    *result = ft_strmap(str, &ft_uptick);
    printf("The resultant string is: %s.\n", result);
	return (0);
}
