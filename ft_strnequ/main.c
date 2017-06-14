#include <string.h>
#include <stdio.h>

unsigned int    ft_atoi(const char *s)
{
    unsigned int i = 0;

    while (*s && *s >= '0' && *s <= '9')
    {
        i *= 10;
        i += *s - 48;
        s++;
    }
    return (i);
}

int             ft_strnequ(const char *s1, const char *s2, size_t n);

int	        	main(int argc, char **argv)
{
    if (argc == 4)
    {
        unsigned int i = ft_atoi(argv[3]);
        printf("The strings to compare are: %s and %s.\nThe number of characters to search is: %s.\n", argv[1], argv[2], argv[3]);
        int result = ft_strnequ(argv[1], argv[2], i);
        if (result)
            printf("The two strings are identical up to %d bytes.\n", i);
        else
            printf("The two strings are not identical.\n");
    }
    else
        printf("Please input two strings and an integer.  The function will lexicographically compare the two strings up to the integer number of characters and return a boolean determining if the strings are identical.\n");
	return (0);
}
