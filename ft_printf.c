/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:35:50 by ael-azha          #+#    #+#             */
/*   Updated: 2024/11/22 16:45:45 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checker(const char str, va_list args)
{
	int	x;

	x = 0;
	if (str == 'c')
		x += ft_putchar(va_arg(args, int));
	else if (str == 'd' || str == 'i')
		x += ft_put_nbr(va_arg(args, int));
	else if (str == 's')
		x += ft_putstr(va_arg(args, char *));
	else if (str == 'x' || str == 'X')
		x += ft_print_hex(va_arg(args, unsigned int), str);
	else if (str == 'p')
		x += ft_print_point(va_arg(args, unsigned long long));
	else if (str == '%')
		x += ft_putchar('%');
	else if (str == 'u')
		x += ft_print_unsigned(va_arg(args, unsigned int));
	return (x);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len_printed;
	int		i;

	len_printed = 0;
	i = 0;
	va_start (args, format);
	if (!format || write (1, 0, 0) == -1)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len_printed += ft_checker (format[i], args);
		}
		else
			len_printed += write (1, &format[i], 1);
		i++;
	}
	va_end (args);
	return (len_printed);
}
