/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:15:07 by jockova           #+#    #+#             */
/*   Updated: 2024/08/22 15:13:11 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
** Files to turn in : ft_str_is_lowercase.c
** Allowed functions : None
** • Create a function that returns 1 if the string given as a parameter contains
**   only lowercase alphabetical characters, and 0 if it contains any other
**   character.
** • Here’s how it should be prototyped :
**   int ft_str_is_lowercase(char *str);
** • It should return 1 if str is empty.
***************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	yes_low;

	i = 0;
	yes_low = 0;
	while ((str[i] != '\0') && (str[i] >= 97 && str[i] <= 122))
		i++;
	if (str[i] == '\0' || str[0] == '0')
		yes_low = 1;
	return (yes_low);
}
/*
int	main(void)
{
	char onlylow[] = "";
	printf("%s\n", onlylow);
	printf("%d", ft_str_is_lowercase(onlylow));	
	return (0);
}
*/
