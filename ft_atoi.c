//
// Created by jimmy on 08/11/22.
//
#include "libft.h"

int	ft_is_space(int character)
{
	return ((character >= 9 && character <= 13) || character == ' ');
}

int	ft_is_sign(int character)
{
	return (character == '+' || character == '-');
}

int	ft_atoi(const char *nptr)
{
	int	index;
	int	result;
	int	is_negative;

	index = 0;
	is_negative = 0;
	result = 0;
	while (ft_is_space(nptr[index]))
		index++;
	while (ft_is_sign(nptr[index]))
	{
		if (ft_is_sign(nptr[index -1]))
			return (0);
		if (nptr[index] == '-')
			is_negative = 1;
		index++;
	}
	while (ft_isdigit(nptr[index]))
	{
		result = result * 10 + (nptr[index] - 48);
		index++;
	}
	if (is_negative)
		result = 0 - result;
	return (result);
}
