/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:28:46 by jbadaire          #+#    #+#             */
/*   Updated: 2022/11/24 14:31:55 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mlc;
	size_t	index;

	if (!s)
		return (NULL);
	mlc = malloc(sizeof (char) * (len + 1));
	if (!mlc)
		return (NULL);
	index = 0;
	while (index < len)
	{
		(mlc)[index + start] = s[index + start];
		index++;
	}
	(mlc)[index + start + 1] = '\0';
	return (mlc);
}
