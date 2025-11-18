
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	num = n;
	if (num < 0)
	{
		num *= -1;
		write(fd, "-", 1);
	}
	if (num >= 0 && num <= 9)
	{
		c = num + '0';
		write(fd, &c, 1);
	}
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
}
