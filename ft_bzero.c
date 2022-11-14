//
// Created by jimmy on 08/11/22.
//
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	index;
	char	*chars;

	index = 0;
	chars = (char *)s;
	while (index < n)
	{
		chars[index] = '\0';
		index++;
	}
}
