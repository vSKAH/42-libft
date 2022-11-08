//
// Created by jimmy on 08/11/22.
//
#include "libft.h"

char *ft_strrchr(const char *s, int c) {
	if (!s)
		return (NULL);

	int s_size;

	s_size = (int) ft_strlen (s);

	while (s[s_size])
	{
		if (s[s_size] == c)
			return ((char *) s);
		s_size--;
	}
	return (NULL);
}