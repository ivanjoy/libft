#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	if (src == NULL || dst == NULL)
		return (NULL);
	while (i < len && dst[i] && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}
