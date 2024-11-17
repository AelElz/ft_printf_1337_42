/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:41:04 by aelelz            #+#    #+#             */
/*   Updated: 2024/11/17 16:07:02 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hex_count(unsigned int num)
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
void    ft_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_print_hex(num % 16, format);
		ft_print_hex(num / 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd(num + '0', 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd(num + 'a', 1);
			else if (format == 'X')
				ft_putchar_fd(num + 'A', 1);
		}
	}
}
int ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write (1, "0", 1));
	else
		ft_hex(num , format);
	return (ft_hex_count(num));
}