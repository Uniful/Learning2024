/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:17:13 by jockova           #+#    #+#             */
/*   Updated: 2024/08/26 13:05:55 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ****************************************************************************
** Files to turn in : ft_strlcat.c
** Allowed functions : None
** • Reproduce the behavior of the function strlcat (man strlcat).
** • Here’s how it should be prototyped :
**   unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
** (src string added to dest within the limit of size; returns the lenght of
** dest+src which can be different from the lenght of output destination string)
***************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	
	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}
/*
// strlcat: src string added to dest within the limit of stated size
// returns lenght of dest+src - can be different from the lenght of output destination str	
int	main(void)
{
	char destination1[40] = "Veronika";
	char destination2[40] = "Veronika";
	char source[] = "Janko";
	unsigned int size = 12;
	printf("1. %lu\n", strlcat(destination1, source, size));
	printf("2. %s\n", destination1);
        printf("5. %u\n", ft_strlcat(destination2, source, size));
	printf("6. %s\n", destination2);
	return (0);
}
*/
