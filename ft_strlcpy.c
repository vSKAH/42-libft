//
// Created by jimmy on 08/11/22.
//
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	if (!src && size > 0)
		return (ft_strlen (src));
	index = 0;
	while (index < size - 1)
	{
		dst[index] = src[index];
		index++;
	}
	return (ft_strlen (src));
}
