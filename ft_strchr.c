//
// Created by jimmy on 08/11/22.
//

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	if (c == '\0')
		return (ft_strlen(s) + (char *) s);
	while (s[index])
	{
		if (s[index] == c)
			return ((char *) s + index);
		index++;
	}
	return (NULL);
}
