/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <jockova@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:41:10 by jockova           #+#    #+#             */
/*   Updated: 2024/08/15 14:03:20 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	number;

	number = 48;
	while (number <= (48 + 9))
	{
		write(1, &number, 1);
		++number;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
