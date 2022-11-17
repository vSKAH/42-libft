//
// Created by Jimmy Badaire on 11/17/22.
//

#include "libft.h"
#include <stdlib.h>

int	count_split(const char *src, char character)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (src[index])
	{
		if (src[index] == character)
			count++;
		index++;
	}
	return (count);
}

size_t	ft_strlcpys(char *dst, const char *src, size_t index, size_t size)
{
	if (size == 0)
		return (ft_strlen (src));
	while (src[index] && index < size -1)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (ft_strlen (src));
}

char	**ft_split(char const *s, char c)
{
	int		cmp;
	int		index;
	int		start_split;
	int		split_at;
	int		sd;
	char	**final_value;

	if (!s)
		return (NULL);
	cmp = count_split(s, c);
	final_value = malloc(sizeof (char *) * cmp);
	if (!final_value)
		return (NULL);
	index = 0;
	start_split = 0;
	sd = 0;
	while (s[index])
	{
		if (s[index] == c)
		{
			split_at = index;
			int size = (int) ft_strlcpys(tmp_value, s, start_split, split_at);
			start_split = index;
			final_value[sd] = malloc(sizeof (char ) * size);
			sd++;
		}
		index++;
	}
	return (final_value);
}