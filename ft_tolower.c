//
// Created by jimmy on 08/11/22.
//
#include "libft.h"

int ft_tolower (int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);

	return (c);
}