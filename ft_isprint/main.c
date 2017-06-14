#include <string.h>
#include <stdio.h>

int     ft_isprint(int c);

int		main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("The inputted character is %c.\n", argv[1][0]);
        int result = ft_isprint(argv[1][0]);
        if (result != 0)
            printf("The inputted character is a printing character.\n");
        else
            printf("The inputted character is not a printing character.\n");
    }
    else
        printf("Input a character.  The function will return whether or not the character is a printing character.\n");
	return (0);
}
