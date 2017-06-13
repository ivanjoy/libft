#include <string.h>
#include <stdio.h>

void    ft_striter(char *s, void (*f)(char *));

void    ft_uptick(char *s)
{
    *s += 1;
}

int		main()
{
    printf("The function will take a string and a function and apply the function to each character in the string.\n");
    char    str[] = "testing";
    printf("The test function adds 1 to the character value of any character sent to it.\n");
    printf("The test string is: %s.\n", str);
    ft_striter(str, &ft_uptick);
    printf("The test string is now: %s.\n", str);
	return (0);
}
