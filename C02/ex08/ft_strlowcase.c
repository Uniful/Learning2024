/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:35:08 by jockova           #+#    #+#             */
/*   Updated: 2024/08/23 09:51:12 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
** Files to turn in : ft_strlowcase.c
** Allowed functions : None
** • Create a function that transforms every letter to lowercase.
** • Here’s how it should be prototyped :
**   char *ft_strlowcase(char *str);
** • It should return str.
***************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char tolow[] = "LoweR me!";
	printf("%s\n", tolow);
	ft_strlowcase(tolow);
	printf("%s", tolow);
	return (0);
}
*/
