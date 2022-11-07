//
// Created by jimmy on 07/11/22.
//

#include "libft.h"

size_t ft_strlen(const char *s) {
	size_t index;

	index = 0;
	while (s[index]) index++;
	return index;
}