#include <string.h>
#include <stdio.h>

int     ft_isalnum(int c);

int		main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("The character you inputted is: %c.\n", argv[1][0]);
        int result = ft_isalnum(argv[1][0]);
        if (result != 0)
            printf("The inputted character is alphanumeric.\n");
        else
            printf("The inputted character is not alphanumeric.\n");
    }
    else
        printf("Input a character.  The function will tell you if that character is alphanumeric.\n");
	return (0);
}
