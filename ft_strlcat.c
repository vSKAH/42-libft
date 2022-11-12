//
// Created by jimmy on 08/11/22.
//
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	dst_size;

	index = 0;
	dst_size = ft_strlen(dst);
	if (size < 1)
		return (ft_strlen(src) + size);
	while (src[index] && dst_size < size - 1)
	{
		dst[dst_size] = src[index];
		dst_size++;
		index++;
	}
	dst[dst_size] = '\0';
	return (dst_size + ft_strlen(&src[index]));
}
