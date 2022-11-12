//
// Created by jimmy on 08/11/22.
//
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (s1[index] < s2[index] || s1[index] > s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}
