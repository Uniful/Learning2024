/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:56:02 by jockova           #+#    #+#             */
/*   Updated: 2024/08/20 13:42:57 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int    temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}
/*
 int    main()
 {
 int    n1;
 int    n2;
 int    *p1;
 int    *p2;
 
 n1 = 1;
 n2 = 2;
 p1 = &n1;
 p2 = &n2;
 printf("%d, %d\n", *p1, *p2);
 ft_swap(p1, p2);
 printf("%d, %d\n", *p1, *p2);
 return (0);
 }
 */
