#include <string.h>
#include <stdio.h>

char	**ft_strsplit(char const *s, char c);

int		main()
{
	printf("The function will take a string and a delimiter character.  The function will return a matrix containing every piece of the string between the delimiter characters.\n");
	char	str[] = "***testing*testing**test*ing***testing**";
	printf("The test string is: %s\nThe delimiter character is: %c\n", str, '*');
	char	**result = ft_strsplit(str, '*');
	int i = 0;
	if (result == NULL)
		printf("Something went wrong.\n");
	printf("The resulting words are:\n");
	while (result[i][0])
		printf("%s\n", result[i++]);
	return (0);
}
