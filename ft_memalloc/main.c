#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int    ft_atoi(char *str)
{
    unsigned int j = 0;
    int i = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        j *= 10;
        j += str[i] - '0';
        i++;   
    }
    return (j);
}

void    *ft_memalloc(size_t size);

int		main(int argc, char **argv)
{
    if (argc == 2)
    {
        unsigned int size = ft_atoi(argv[1]);
        printf("The requested size of the buffer is: %d.\n", size);
        char    *str = ft_memalloc(size);
        printf("The buffer was successfully created.\n");
        free(str);
    }
    else
        printf("Input a number.  The Function will allocate memory for that number of bytes.\n");
	return (0);
}
