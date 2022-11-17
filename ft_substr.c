//
// Created by Jimmy Badaire on 11/17/22.
//

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*mlc;
	size_t	index;

	if (!s)
		return (NULL);
	mlc = malloc(sizeof (char) * (len + 1));
	if (!mlc)
		return (NULL);
	index = 0;
	while (index < len)
	{
		((char *)mlc)[index + start] = s[index + start];
		index++;
	}
	((char *)mlc)[index + start + 1] = '\0';
	return (mlc);
}
