#include <string.h>
#include <stdio.h>

int     ft_isdigit(int c);

int		main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("The character you inputted is %c.\n", argv[1][0]);
        int result = ft_isdigit(argv[1][0]);
        if (result != 0)
            printf("The inputted character is a digit.\n");
        else
            printf("The inputted character is not a digit.\n");
    }
    else
        printf("Input a character.  The function will determine if the character is a digit or not.\n");
	return (0);
}
