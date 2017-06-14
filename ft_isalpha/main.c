#include <string.h>
#include <stdio.h>

int	isalpha(int c);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
        printf("The character we'll send to the function is: %c.\n", argv[1][0]);
        int result = isalpha(argv[1][0]);
        if (result != 0)
            printf("The character is an alphabetical character.\n");
        else
            printf("The character is not an alphabetical character.\n");
	}
	else
        printf("Please input a character.  The function will determine if that character is an alphabetical character or not.");
	return (0);
}
