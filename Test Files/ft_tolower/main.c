#include <string.h>
#include <stdio.h>

int     ft_tolower(int c);

int		main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("The inputted character is: %c.\n", argv[1][0]);
        int result = ft_tolower(argv[1][0]);
        printf("The resulting character is: %c.\n", result);
    }
    else
        printf("Please input a character.  If the inputted character is capitalized, the function will return that character uncapitalized.\n");
	return (0);
}
