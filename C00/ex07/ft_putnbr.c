#include <unistd.h>
#include <limits.h>

void ft_putnbr(int nb)
{
	int	mod;

	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	mod = (nb % 10) + 48;
	write(1, &mod, 1);
}
/*
int	main(void)
{
	ft_putnbr(42);
	return (0);
}
*/
