#include <string.h>
#include <stdio.h>

int     ft_strequ(const char *s1, const char *s2);

int		main(int argc, char **argv)
{
    if (argc == 3)
    {
        printf("The two inputted strings are: %s and %s.\n", argv[1], argv[2]);
        int result = ft_strequ(argv[1], argv[2]);
        if (result)
            printf("The two strings are identical.\n");
        else
            printf("The two strings are different.\n");
    }
    else
        printf("Please insert two strings.  The function will compare them lexographically and return 1 if they are identical and 0 otherwise.\n");
	return (0);
}
