//
// Created by Jimmy Badaire on 11/17/22.
//

#include "libft.h"
#include "unistd.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	char			ch;

	nb = n;
	if (nb < 0)
	{
		nb = nb * -1;
		write (fd, "-", 1);
	}
	if (nb <= 9)
	{
		ch = nb + '0';
		write(fd, &ch, 1);
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
