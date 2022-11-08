//
// Created by jimmy on 08/11/22.
//

#include "libft.h"

char *ft_strchr (const char *s, int c)
{
	if (!s)
		return (NULL);

	int index;

	index = 0;
	while (s[index])
	{
		if (s[index] == c)
			return ((char *) s);
		index++;
	}
	return (NULL);
}