/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:35:50 by ael-azha          #+#    #+#             */
/*   Updated: 2024/11/17 15:31:27 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void    ft_check(const char *str, va_list args)
{   
}

int	ft_printf(const char *format, ...)
{
    va_list args;
    int i;

    if(!format)
        return (-1);
    va_start(args, format);
    i = 0;
    while (format[i] != NULL)
    {
        if (format[i] == '%' && format[i] != '\0')
        {
            i++;
            
        }
    }
    
}
/*
ft_puthex_pf()
ft_putnbr_pf()
ft_putpoint_pf()
ft_putstr_pf()
ft_putunsi_pf()
*/