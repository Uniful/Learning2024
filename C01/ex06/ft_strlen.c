/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:29:13 by jockova           #+#    #+#             */
/*   Updated: 2024/08/20 13:53:08 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
        len = len + 1;
	return (len);
}
/*
int	main(void)
{
	char	string[] = "abc";

	printf("%d", ft_strlen(string));
	return (0);
}
*/
