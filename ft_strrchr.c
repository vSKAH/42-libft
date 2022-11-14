//
// Created by jimmy on 08/11/22.
//
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*result;

	result = NULL;

	index = (int)ft_strlen(s);
	while (index >= 0)
	{
		if (s[index] == c)
		{
			result = (char *) s + index;
			break ;
		}
		index--;
	}
	return (result);
}
