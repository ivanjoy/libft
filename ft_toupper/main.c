#include <string.h>
#include <stdio.h>

int     ft_toupper(int c);

int		main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("The inputted character is %c.\n", argv[1][0]);
        int result = ft_toupper(argv[1][0]);
        printf("The resulting character is: %c.\n", result);
    }
    else
        printf("please input a character.  If that character is a letter, the function will return that letter capitalized.\n");
	return (0);
}
