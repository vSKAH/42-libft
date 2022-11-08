//
// Created by jimmy on 07/11/22.
//

#include "libft.h"

int ft_isalnum (int c)
{
	return (ft_isalpha (c) || ft_isdigit (c));
}