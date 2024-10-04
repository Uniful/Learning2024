/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:22:48 by jockova           #+#    #+#             */
/*   Updated: 2024/08/24 13:51:07 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ****************************************************************************
** Files to turn in : ft_strncmp.c
** Allowed functions : None
** • Reproduce the behavior of the function strncmp (man strncmp).
** • Here’s how it should be prototyped :
**   int ft_strncmp(char *s1, char *s2, unsigned int n);
***************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	dif;
	unsigned int	i;

	dif = 0;
	i = 0;
	while ((s1[i] || s2[i]) && i < n && dif == 0)
	{
		dif = s1[i] - s2[i];
		i++;
	}
	return (dif);
}
/*
int main(void)
{
	char string1[] = "AB";
	char string2[] = "ABDFG";
	char string3[] = "abc";
	char string4[] = "ab";
	unsigned int limit = 3;

	printf("%d\n", strcmp(string1, string2));
	printf("%d\n", strncmp(string1, string2, limit));
	printf("%d\n", ft_strncmp(string1, string2, limit));
	printf("%d\n", strncmp(string3, string4, limit));
	printf("%d\n", ft_strncmp(string3, string4, limit));
	return (0);
}
*/
