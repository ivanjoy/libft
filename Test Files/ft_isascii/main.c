#include <string.h>
#include <stdio.h>

int     ft_isascii(int c);

int		main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("The inputted character is: %c.\n", argv[1][0]);
        int result = ft_isascii(argv[1][0]);
        if (result != 0)
            printf("The character is an ascii character.\n");
        else
            printf("The character is not an ascii character.\n");
    }
    else
        printf("Input a character.  The function will return whether the character is an ascii character or not.");
	return (0);
}
