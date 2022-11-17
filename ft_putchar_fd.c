//
// Created by Jimmy Badaire on 11/17/22.
//

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
