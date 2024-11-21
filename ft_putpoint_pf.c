/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-azha <ael-azha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:35:38 by aelelz            #+#    #+#             */
/*   Updated: 2024/11/21 13:52:22 by ael-azha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_point_count(unsigned long long num)
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

void	ft_point(unsigned long long num)
{
	if (num >= 16)
	{
		ft_point(num / 16);
		ft_point(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

int	ft_print_point(unsigned long long num)
{
	int	print_len;

	print_len = 0;
	if (!num)
		return (write (1, "0x0", 3));
	print_len += write (1, "0x", 2);
	ft_point(num);
	print_len += ft_point_count(num);
	return (print_len);
}
