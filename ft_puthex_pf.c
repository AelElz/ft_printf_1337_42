/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:41:04 by aelelz            #+#    #+#             */
/*   Updated: 2024/11/18 14:34:34 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

int	ft_hex_count(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_print_digit(unsigned int num, const char format)
{
	if (num <= 9)
		ft_putchar(num + '0');
	else
	{
		if (format == 'x')
			ft_putchar(num - 10 + 'a');
		else if (format == 'X')
			ft_putchar(num - 10 + 'A');
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	else if (num >= 16)
		ft_print_hex(num / 16, format);
	ft_print_digit(num % 16, format);
	return (ft_hex_count(num));
}
