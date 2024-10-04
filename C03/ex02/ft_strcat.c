/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:17:13 by jockova           #+#    #+#             */
/*   Updated: 2024/08/24 14:48:39 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ****************************************************************************
** Files to turn in : ft_strcat.c
** Allowed functions : None
** • Reproduce the behavior of the function strcat (man strcat).
** • Here’s how it should be prototyped :
**   char *ft_strcat(char *dest, char *src);
***************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	destlen;
	int	i;

	destlen = 0;
	i = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (src[i] != '\0')
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char destination1[] = "Veronika";
	char destination2[] = "Veronika";
	char source[] = "Janko";

	printf("%s\n", strcat(destination1, source));
	printf("%s\n", ft_strcat(destination2, source));
	return (0);
}
*/
