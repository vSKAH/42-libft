//
// Created by jimmy on 08/11/22.
//

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;
	char	*result;

	result = NULL;
	if (!s)
		return (result);

	index = 0;
	while (s[index])
	{
		if (s[index] == c)
		{
			result = (char *) s + index;
			break ;
		}
		index++;
	}
	return (result);
}
