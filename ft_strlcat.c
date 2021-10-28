#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	else if (size < dest_len)
	{
		return (src_len + size);
	}
	while (src[i] != '\0' && dest_len < (size - 1))
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (src_len + ft_strlen(dest) - i);
}
