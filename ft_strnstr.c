/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:29:02 by jbadaire          #+#    #+#             */
/*   Updated: 2022/11/24 14:29:02 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	text_index;
	size_t	word_index;

	text_index = 0;
	word_index = 0;
	if (ft_strlen(needle) == 0 || haystack == needle)
		return ((char *) haystack);
	while (text_index < len)
	{
		if (haystack[text_index] == needle[word_index])
		{
			while (haystack[text_index + word_index] == needle[word_index])
			{
				word_index++;
				if (needle[word_index] == '\0' && word_index + text_index < len)
					return ((char *) &haystack[text_index]);
			}
			word_index = 0;
		}
		text_index++;
	}
	return (NULL);
}
