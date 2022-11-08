//
// Created by jimmy on 08/11/22.
//
#include "libft.h"

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
	dst[size + 1] = '\0';
	while (size >= 0)
	{
		dst[size] = src[size];
		size--;
	}
	return sizeof (dst);
}