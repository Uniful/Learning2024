/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:13:12 by jockova           #+#    #+#             */
/*   Updated: 2024/08/23 09:13:40 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
** Files to turn in : ft_strlcpy.c
** Allowed functions : None
** • Reproduce the behavior of the function strlcpy (man strlcpy).
** • Here’s how it should be prototyped :
**   unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
***************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
    len = 0;
    while (src[len] != 0)
        len++;
    return (len);
}
/*
int main(void)
{
	char source[] = "Hello!";
	char destination[] =  "ouifhfghfghf";
	unsigned int size = 4;

	printf("%s\n", source);
	printf("%s\n", destination);
	ft_strlcpy(destination, source, size);
	printf("%d\n", ft_strlcpy(destination, source, size));
	printf("%s\n", destination);
	return (0);
}
*/
