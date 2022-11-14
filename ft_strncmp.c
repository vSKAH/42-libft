//
// Created by jimmy on 08/11/22.
//
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	t1;
	unsigned char	t2;

	index = 0;
	while ((s1[index] || s2[index]) && index < n)
	{
		t1 = s1[index];
		t2 = s2[index];
		if (t1 < t2 || t1 > t2)
			return (t1 - t2);
		index++;
	}
	return (0);
}
