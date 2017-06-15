#include <string.h>
#include <stdio.h>

void    ft_striteri(char *s, void (*f)(unsigned int, char *));

void    ft_uptick2(unsigned int i, char *c)
{
    *c += i;
}

int		main()
{
    printf("The function will apply a provided function to every element in a string.\n");
    printf("The function that will be applied to every character in the string is one that adds the value of the index to the character.\n");
    char    string[] = "lololol";
    printf("The test string is: %s.\n", string);
    ft_striteri(string, &ft_uptick2);
    printf("After applying the test function, the test string is now: %s.\n", string);
	return (0);
}
