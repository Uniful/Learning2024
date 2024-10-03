/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 08:18:22 by jockova           #+#    #+#             */
/*   Updated: 2024/08/22 18:02:27 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
** Files to turn in : ft_strncpy.c
** Allowed functions : None
** • Reproduce the behavior of the function strncpy (man strncpy).
** • Here’s how it should be prototyped :
**   char *ft_strncpy(char *dest, char *src, unsigned int n)
***************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	unsigned int	size;

	size = 5;
	char source[] = "Ca va, toi?";
	char destination[80];
	printf("%s\n", source);
	ft_strncpy(destination, source, size);
	printf("%s\n", destination);
	printf("%s", ft_strncpy(destination, source, size));
	return (0);
}
*/
