#include <string.h>
#include <stdio.h>

char    *ft_strnew(size_t size);

int		main()
{
    printf("The function will create a string and initialize every byte to \\0.\n");
    char    *str = NULL;
    printf("The container variable is currently pointing to: %p.\n", str);
    str = ft_strnew(5);
    printf("After creating the string, the variable is now pointing to: %p.\n", str);
	return (0);
}
