#include <string.h>
#include <stdio.h>

void    ft_strclr(char *s);

int		main()
{
    printf("The function is going to take a string and set every byte to \\0.\n");
    char str[] = "testing";
    printf("The test string is: %s.\n", str);
    ft_strclr(str);
    printf("the test string is now: %s.\n", str);
	return (0);
}
