/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:35:50 by ael-azha          #+#    #+#             */
/*   Updated: 2024/11/18 13:59:59 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checker(va_list args, const char str)
{
	int	x;

	x = 0;
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
	else if (str == 'u')
		x += ft_print_unsigned(va_arg(args, unsigned int));
	return (x);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len_printed;

	len_printed = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			len_printed += ft_checker(args, format[i]);
		}
		else
			len_printed += ft_putchar_pf(format[i]);
		i++;
	}
	va_end (args);
	return (len_printed);
}
