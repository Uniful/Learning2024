#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{	
	int i;
	int j;
	int temp;

	j = 0;
	while (j < (size - 1))
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}		   	

}
/*
int	main()
{
	int numbers[] = {100, 6, 8, 7, 5};
	int size = 5;
	int i = 0;

	ft_sort_int_tab(numbers, size);
	while (i < size)
	{
		printf("%d ", numbers[i]);
		i++;
	}
	return (0);
}
*/
