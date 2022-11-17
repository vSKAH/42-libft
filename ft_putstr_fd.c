//
// Created by Jimmy Badaire on 11/17/22.
//
#include <fcntl.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	index;

	if(!s)
		return ;
	index = 0;
	while (s[index] != '\0')
	{
		ft_putchar_fd(s[index], fd);
		index++;
	}
}

