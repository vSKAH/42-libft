/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:30:28 by jbadaire          #+#    #+#             */
/*   Updated: 2022/11/24 14:30:28 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	if (c == '\0')
		return (ft_strlen(s) + (char *) s);
	while (s[index])
	{
		if (s[index] == c)
			return ((char *) s + index);
		index++;
	}
	return (NULL);
}
