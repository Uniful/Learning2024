/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:17:13 by jockova           #+#    #+#             */
/*   Updated: 2024/08/26 16:54:12 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ****************************************************************************
** Files to turn in : ft_strncat.c
** Allowed functions : None
** • Reproduce the behavior of the function strncat (man strncat).
** • Here’s how it should be prototyped :
**   char *ft_strncat(char *dest, char *src, unsigned int nb);
***************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_len(char *dest)
{
	int	destlen;

	destlen = 0;
	while (dest[destlen] != '\0')
		destlen++;
	return (destlen);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dl;

	i = 0;
	dl = ft_len(dest);
	while ((dest[dl] != '\0' || src[i] != '\0') && i < nb)
	{
		dest[dl] = src[i];
		i++;
		dl++;
	}
	dest[dl] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char destination1[] = "Veronika";
	char destination2[] = "Dominika";
	char source[] = "Janko";
	unsigned int limit = 3;

	printf("%s\n", strncat(destination1, source, limit));
	printf("%s\n", ft_strncat(destination2, source, limit));
	return (0);
}
*/
