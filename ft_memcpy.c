//
// Created by jimmy on 08/11/22.
//

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;

	if (!dest && !src)
		return (0);
	index = 0;
	while (n > index)
	{
		((char *)dest)[index] = ((char *) src)[index];
		index++;
	}
	return (dest);
}

