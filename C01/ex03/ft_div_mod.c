/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:53:38 by jockova           #+#    #+#             */
/*   Updated: 2024/08/20 13:45:04 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
 int    main(void)
 {
 int    division;
 int    modulo;
 
 ft_div_mod(11, 5, &division, &modulo);
 printf("%d, %d\n", division, modulo);
 
 return (0);
 }
 */
