/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:02:49 by jockova           #+#    #+#             */
/*   Updated: 2024/08/22 09:33:41 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
** Files to turn in : ft_strupcase.c
** Allowed functions : None
** • Create a function that transforms every letter to uppercase.
** • Here’s how it should be prototyped :
**   char *ft_strupcase(char *str);
** • It should return str.
***************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char tocap[] = "Capitalize me!";
	printf("%s\n", tocap);
	ft_strupcase(tocap);
	printf("%s", tocap);
	return (0);
}
*/
