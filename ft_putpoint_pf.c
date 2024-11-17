/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:35:38 by aelelz            #+#    #+#             */
/*   Updated: 2024/11/17 12:57:42 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_point_count(unsigned long long num)
{
    int len;

    len = 0;
    while (num != 0)
    {
        len++;
        num = num / 16;
    }
    return (len);
}
void    ft_point(unsigned long long num)
{
    if (num >= 16)
    {
        ft_point(num / 16);
        ft_point(num % 16);
    }
    else
    {
        if (num <= 9)
            ft_putchar_fd(num + '0', 1);
        else
            ft_putchar_fd(num - 10 + 'a', 1);
    }
}
int ft_print_point(unsigned long long num)
{
    int print_len;

    print_len = 0;
    print_len = print_len + write(1, "0x", 2);
    if (num == 0)
        print_len += write (1, "0", 1);
    else
    {
        ft_point(num);
        print_len = print_len + ft_point_count(num);
    }
    return(print_len);
}
