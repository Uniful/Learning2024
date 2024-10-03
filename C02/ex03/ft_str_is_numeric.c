/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:42:40 by jockova           #+#    #+#             */
/*   Updated: 2024/08/22 13:05:03 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
** Files to turn in : ft_str_is_numeric.c
** Allowed functions : None
** • Create a function that returns 1 if the string given as a parameter contains
**   only digits, and 0 if it contains any other character.
** • Here’s how it should be prototyped :
**   int ft_str_is_numeric(char *str);
** • It should return 1 if str is empty.
****************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	yes_nbs;

	i = 0;
	yes_nbs = 0;
	while ((str[i] != '\0') && (str[i] >= 48) && (str[i] <= 57))
		i++;
    if ((str[i] == '\0') || (str[0] == '\0'))
		yes_nbs = 1;
	return (yes_nbs);
}
/*
int	main(void)
{
    printf("%d\n", ft_str_is_numeric(""));
    printf("%d\n", ft_str_is_numeric("01948987493"));
    printf("%d\n", ft_str_is_numeric("0484882j8995489"));
    printf("%d\n", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
	return (0);
}
*/
