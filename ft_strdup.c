//
// Created by Jimmy Badaire on 11/15/22.
//
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *source)
{
	void	*v;
	int		index;

	v = malloc(ft_strlen(source) + 1 * sizeof (char));
	if (!v)
		return (v);
	index = 0;
	while (source[index])
	{
		((char *)v)[index] = source[index];
		index++;
	}
	((char *)v)[index] = '\0';
	return (v);
}
