//
// Created by Jimmy Badaire on 11/15/22.
//

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*t;

	t = malloc(count * size);
	if (t != NULL)
		ft_bzero(t, count * size);
	return (t);
}
