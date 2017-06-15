#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int		i;
	int		num;
	
	i = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	return (num);
}

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i++]);
	return (i - 1);
}

void	*ft_memmove(void *dst, const void *src, size_t len);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		size_t	n;
		char	*dst;

		printf("Input String: %s\n", argv[1]);
		n = ft_atoi(argv[2]);
		printf("Number of bytes to copy: %s\n", argv[2]);
		dst = (char*) malloc((ft_strlen(argv[1]) + 1) * sizeof(dst));
		dst = ft_memmove(dst, argv[1], n);
		printf("Copied String: %s\n", dst);
	}
	return (0);
}
