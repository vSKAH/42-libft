//
// Created by jimmy on 08/11/22.
//
#include "libft.h"

size_t strlcat (char *dst, const char *src, size_t size)
{
	size_t src_size;
	size_t dst_size;

	src_size = ft_strlen (src);
	dst_size = ft_strlen (dst);

	while (size > 0) {
		dst[dst_size++] = src[src_size--];
		size--;
	}

	return (size - ft_strlen (dst) - 1);
}