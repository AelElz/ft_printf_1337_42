/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:35:50 by ael-azha          #+#    #+#             */
/*   Updated: 2024/11/17 16:53:10 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_checker(va_list args, const char str)
{
	int	x;
	
	if (str == 'c')
		x += ft_putchar_pf(va_arg(args, int));
	else if (str == 'd' || str == 'i')
		x += ft_putnbr_pf(va_arg(args, int));
	else if (str == 's')
		x += ft_print_str(va_arg(args, char *));
	else if (str == 'x' || str == 'X')
		x += ft_print_hex(va_arg(args, unsigned int), str);
	else if (str == 'p')
		x += ft_print_point(va_arg(args, unsigned long long));
	else if (str == '%')
		x += ft_print_per();
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int i;
	int	print;

	if(!format)
		return (-1);
	va_start(args, format);
	i = 0;
	while (format[i] != NULL)
	{
		if (format[i] == '%' && format[i] != '\0')
		{
			i++;
			ft_checker(args, format[i]);
		}
		else
			
	}
	
}
/*
ft_puthex_pf()
ft_putnbr_pf()
ft_putpoint_pf()
ft_putstr_pf()
ft_putunsi_pf()
*/