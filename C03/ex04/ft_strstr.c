/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:17:13 by jockova           #+#    #+#             */
/*   Updated: 2024/08/26 15:05:55 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ****************************************************************************
** Files to turn in : ft_strstr.c
** Allowed functions : None
** • Reproduce the behavior of the function strstr (man strstr).
** • Here’s how it should be prototyped :
**   char *ft_strstr(char *str, char *to_find);
***************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			if (j == 0)
				p = &str[i];
			if ((str[i + 1] == '\0' && to_find[j + 1] != '\0')
				|| (str[i + 1] != to_find[j + 1] && to_find[j + 1] != '\0'))
				return (NULL);
			if (to_find[j + 1] == '\0')
				return (p);
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char haystack1[] = "Veronika";
	char haystack2[] = "Veronika";
	char needle[] = "z";
	printf("%s\n", strstr(haystack1, needle));
	printf("%s\n", ft_strstr(haystack2, needle));
	return (0);
}
*/
