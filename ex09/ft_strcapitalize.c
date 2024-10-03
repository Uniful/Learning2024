/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:06:04 by jockova           #+#    #+#             */
/*   Updated: 2024/08/23 09:47:19 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
** Files to turn in : ft_strcapitalize.c
** Allowed functions : None
** • Create a function that capitalizes the first letter of each word and
**   transforms all other letters to lowercase.
** • A word is a string of alphanumeric characters.
** • Here’s how it should be prototyped :
**   char *ft_strcapitalize(char *str);
** • It should return str.
** • For example:
**   salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
** • Becomes:
**   Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
***************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122)
			&& (i == 0
				|| str[i - 1] < 48
				|| str[i - 1] > 122
				|| (str[i - 1] > 57 && str[i -1] < 65)
				|| (str[i - 1] > 90 && str[i -1] < 97)))
		{
			str[i] = str[i] - 32;
		}
		if ((str[i] >= 65 && str[i] <= 90)
			&& (i != 0
				&& ((str[i - 1] >= 97 && str[i - 1] <= 122)
					|| (str[i - 1] >= 65 && str[i - 1] <= 90))))
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
	char tocap1st[] = "salUt, ca vA ? 42?mots; Cin:quante-et+UN";
	printf("%s\n", tocap1st);
	ft_strcapitalize(tocap1st);
	printf("%s\n", tocap1st);
	return (0);
}
*/
