/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:13:12 by jockova           #+#    #+#             */
/*   Updated: 2024/08/23 09:15:40 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
** Files to turn in : ft_putstr_non_printable.c
** Allowed functions : write
** • Create a function that displays a string of characters onscreen. If this
**   string contains characters that aren’t printable, they’ll have to be
**   displayed in the shape of hexadecimals (lowercase), preceeded by 
**   a "backslash".
** • For example :
**   Coucou\ntu vas bien ?
** • The function should display :
**   Coucou\0atu vas bien ?
** • Here’s how it should be prototyped :
**   void ft_putstr_non_printable(char *st
***************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char c)
{
	char hex[] = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_print_hex(str[i]);
		i++;
	}			
}
/*
int	main()
{
	char string[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
	return (0);
}
*/
