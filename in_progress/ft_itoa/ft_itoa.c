#include <stdlib.h>
#include <string.h>

static int	ft_powx(int base, int exp)
{
	int		i;
	int		num;

	i = 0;
	num = 1;
	if (exp == 0)
		return (1);
	while (i < exp)
	{
		num *= base;
		i++;
	}
	return (num);
}

char		*ft_itoa(int n)
{
	int				i;
	unsigned int	j;
	char			*result;

	i = 0;
	j = 0;
	if (n == -2147483648)
		return ("-2147483648");
	while (n / (ft_powx(10, i++)));
	if (n < 0)
	{
		j++;
		n *= -1;
	}
	result = (char *)malloc((i + j + 1) * sizeof(char));
	result[i-- + j] = '\0';
	if (j == 1)
		result[0] = '-';
	i--;
	while (i >= 0)
	{
		result[j++] = (int)(n / ft_powx(10, i)) + '0';
		n %= ft_powx(10, i--);
	}
	return (result);
}
