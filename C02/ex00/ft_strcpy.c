/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:29:37 by jockova           #+#    #+#             */
/*   Updated: 2024/08/22 12:55:37 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
** Files to turn in : ft_strcpy.c
** Allowed functions : None
** • Reproduce the behavior of the function strcpy (man strcpy).
** • Here’s how it should be prototyped :
**   char *ft_strcpy(char *dest, char *src)
***************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char source[] = "how are you?";
	char destination[20];
	printf("%s", source);
	ft_strcpy(destination, source);
	printf("%s", destination);
	return (0);
}
*/
