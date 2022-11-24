/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:28:46 by jbadaire          #+#    #+#             */
/*   Updated: 2022/11/24 16:28:59 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mlc;
	size_t	index;
	size_t	s_size;

	if (!s)
		return (NULL);
	s_size = ft_strlen(s);
	mlc = malloc(3 * len + 1);
	if (!mlc)
		return (NULL);
	index = 0;
	while (index < len && start + index < s_size)
	{
		mlc[index + start] = s[index + start];
		index++;
	}
	mlc[index] = '\0';
	return (mlc);
}
