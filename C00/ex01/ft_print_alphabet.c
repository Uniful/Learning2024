/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <jockova@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 09:30:53 by jockova           #+#    #+#             */
/*   Updated: 2024/08/15 14:23:32 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		++letter;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
