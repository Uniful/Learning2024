/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:42:21 by jockova           #+#    #+#             */
/*   Updated: 2024/08/22 13:09:22 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
** Files to turn in : ft_str_is_uppercase.c
** Allowed functions : None
** • Create a function that returns 1 if the string given as a parameter contains
**   only uppercase alphabetical characters, and 0 if it contains any other
**   character.
** • Here’s how it should be prototyped :
**   int ft_str_is_uppercase(char *str);
** • It should return 1 if str is empty.
***************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	yes_upper;

	i = 0;
	yes_upper = 0;
	while (str[i] != '\0' && str[i] >= 65 && str[i] <= 90)
		i++;
	if (str[i] == '\0' || str[0] == '\0')
		yes_upper = 1;
	return (yes_upper);
}
/*
int	main(void)
{
	char onlyup[] = "";
	printf("%s\n", onlyup);
	printf("%d", ft_str_is_uppercase(onlyup));
	return (0);
}
*/
