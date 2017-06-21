#include <string.h>

char	*strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	while (i < len && dst[i] && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
