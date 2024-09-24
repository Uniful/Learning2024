#include <unistd.h>

void	ft_print_comb(void)
{
	int a = '0';
	int b = '1';
	int c = '2';

	while (a <= '7')
	{
		while(b <= '8')
		{
			if (b != a)
			{
				while(c <= '9')
				{
					if (c != a && c != b)
					{
						write(1, &a, 1);
						write(1, &b, 1);
						write(1, &c, 1);
						if (a != '7')
							write(1, ", ", 2);
					}
				c++;
				}
				c = b + 1;
				
			}
		b++;
		}
		b = a + 1;
	a++;
	b = a + 1;
	c = b + 1;
	}
}		
/*
int	main(void)
{
	ft_print_comb();	
	return (0);
}
*/
