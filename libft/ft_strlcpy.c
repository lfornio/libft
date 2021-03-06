#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src,
		size_t dstsize)
{
	size_t	i;
	size_t	ish;

	i = 0;
	if (!dst || !src)
		return (0);
	ish = ft_strlen(src);
	if (dstsize == 0)
		return (ish);
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ish);
}
