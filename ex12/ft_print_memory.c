/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c	                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jockova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 08:13:12 by jockova           #+#    #+#             */
/*   Updated: 2024/08/23 09:17:40 by jockova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *****************************************************************************
** Files to turn in : ft_print_memory.c
** Allowed functions : write
** • Create a function that displays the memory area onscreen.
** • The display of this memory area should be split into three "columns"
**   separated by a space:
**   ◦ The hexadecimal address of the first line’s first character followed by a ’:’.
**   ◦ The content in hexadecimal with a space each 2 characters and should be
**     padded with spaces if needed (see the example below).
**   ◦ The content in printable characters.
** • If a character is non-printable, it’ll be replaced by a dot.
** • Each line should handle sixteen characters.
** • If size is equal to 0, nothing should be displayed.
** • Example:
**   $> ./ft_print_memory
**   000000010a161f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
**   000000010a161f50: 6368 6573 090a 0963 0720 6573 7420 666f ches...c. est fo
**   000000010a161f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on
**   000000010a161f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.
**   000000010a161f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..
**   000000010a161f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .
**   $> ./ft_print_memory | cat -te
**   0000000107ff9f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin$
**   0000000107ff9f50: 6368 6573 090a 0963 0720 6573 7420 666f ches...c. est fo$
**   0000000107ff9f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on $
**   0000000107ff9f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.$
**   0000000107ff9f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..$
**   0000000107ff9f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .$
**   $>
** • Here’s how it should be prototyped:
**   void *ft_print_memory(void *addr, unsigned int size);
** • It should return addr.
****************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(const char *str)
{
    while (*str)
        ft_putchar(*str++);
}

// Converts an integer to its hexadecimal form and prints it
void ft_print_hex(unsigned long nbr, int width) //width 16
{
    char hex_digits[] = "0123456789abcdef";
    char result[width];
    int i;

    i = width - 1; //15
    while (i >= 0)
    {
        result[i--] = hex_digits[nbr % 16]; //assigns to i result[i] and then decrease it
        nbr /= 16;
    }
    i = 0;
    while (i < width)
        ft_putchar(result[i++]);
}

// Prints the memory content in hexadecimal
void ft_print_memory_hex(unsigned char *p, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        ft_print_hex(p[i], 2);
        if (i % 2) // Add space every two characters
            ft_putchar(' ');
        i++;
    }
    while (i < 16) // Padding with spaces if less than 16 characters in the line
    {
        ft_putstr("   ");
        if (i % 2)
            ft_putchar(' ');
        i++;
    }
}

// Prints the printable characters or dots for non-printable ones
void ft_print_memory_char(unsigned char *p, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (p[i] >= 32 && p[i] <= 126) // Printable range
            ft_putchar(p[i]);
        else
            ft_putchar('.');
        i++;
    }
}

void *ft_print_memory(void *addr, unsigned int size)
{
    unsigned int i;
    unsigned char *p;

    p = (unsigned char *)addr; // Cast addr to a pointer to unsigned char
    i = 0;
    while (i < size)
    {
        // Print address in hexadecimal, 16 characters wide
        ft_print_hex((unsigned long)(p + i), 16);
        ft_putchar(':');
        ft_putchar(' ');

        // Print the content in hexadecimal
        if (size - i >= 16)
            ft_print_memory_hex(p + i, 16);
        else
            ft_print_memory_hex(p + i, size - i);

        // Print the content as characters
        ft_print_memory_char(p + i, (size - i >= 16) ? 16 : size - i);
        ft_putchar('\n');

        i += 16;
    }
    return addr;
}
/*
int main(void)
{
    char str[] = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
    ft_print_memory(str, sizeof(str));
    return 0;
}
*/
