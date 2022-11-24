/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:28:54 by jbadaire          #+#    #+#             */
/*   Updated: 2022/11/24 14:31:55 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
