/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:58:46 by jockova           #+#    #+#             */
/*   Updated: 2024/08/22 13:03:22 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
** Files to turn in : ft_str_is_alpha.c
** Allowed functions : None
** • Create a function that returns 1 if the string given as a parameter contains
**   only alphabetical characters, and 0 if it contains any other character.
** • Here’s how it should be prototyped :
**   int ft_str_is_alpha(char *str);
** • It should return 1 if str is empty.
***************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	yes_alp;

	i = 0;
	yes_alp = 0;
	while ((str[i] != '\0') && ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z')))
		i++;
	if ((str[i] == '\0') || (str[0] == '\0'))
		yes_alp = 1;
	return (yes_alp);
}
/*
int	main(void)
{
	char onlyalpha[] = "";
	printf("%s\n", onlyalpha);
	ft_str_is_alpha(onlyalpha);
	printf("%d", ft_str_is_alpha(onlyalpha));
	return (0);
}
*/
