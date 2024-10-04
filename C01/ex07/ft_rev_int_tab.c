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
/*
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
