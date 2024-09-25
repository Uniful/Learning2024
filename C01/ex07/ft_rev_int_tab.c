/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:22:01 by jockova           #+#    #+#             */
/*   Updated: 2024/08/20 13:55:46 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;	

	i = 0;
	while (i < (size - 1) / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int	numbers[] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		printf("%d", numbers[i]);
		i++;
	}
	ft_rev_int_tab(numbers, size);
	printf("\n");
	while (j < size)
	{
		printf("%d", numbers[j]);
		j++;
	}
	return (0);
}
*/
/* ********************************better alternative****************************
#include <unistd.h>
#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
        int     temp;
        int     i;
        int     j;

        i = 0;
        j = size - 1;
        while (i < j)
        {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
                i++;
                j--;
        }

}

int     main()
{
        int     i;
        int numbers[] = {1, 2, 3, 4};
        ft_rev_int_tab(numbers, 4);
        i = 0;
        while (i < 4)
        {
                printf("%d ", numbers[i]);
                i++;
        }
        return (0);
}
*/
~     
