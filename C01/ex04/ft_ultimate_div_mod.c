/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:42:00 by jockova           #+#    #+#             */
/*   Updated: 2024/08/20 13:48:20 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	modulo;

	division = *a / *b;
	modulo = *a % *b;
	*a = division;
	*b = modulo;
}
/*
 int    main(void)
 {
	int n1 = 11;
 	int n2 = 5;
 
 	ft_ultimate_div_mod(&n1, &n2);
 	printf("%d, %d\n", n1, n2);
 	return (0);
 }
 */

