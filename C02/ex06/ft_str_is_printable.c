/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 08:46:24 by jockova           #+#    #+#             */
/*   Updated: 2024/08/22 09:00:54 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
** Files to turn in : ft_str_is_printable.c
** Allowed functions : None
** • Create a function that returns 1 if the string given as a parameter contains
** only printable characters, and 0 if it contains any other character.
** • Here’s how it should be prototyped :
**   int ft_str_is_printable(char *str);
** • It should return 1 if str is empty.
***************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	yes_print;

	i = 0;
	yes_print = 0;
	while (str[i] != '\0' && str[i] >= 32 && str[i] <= 126)
		i++;
	if (str[i] == '\0' || str[0] == '\0')
		yes_print = 1;
	return (yes_print);
}
/*
int	main(void)
{
	char onlyprint[] = "5dvpd~";
	printf("%s\n", onlyprint);
	printf("%d\n", ft_str_is_printable(onlyprint));
	return (0);
}
*/
