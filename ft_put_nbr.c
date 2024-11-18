/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:58:01 by aelelz            #+#    #+#             */
/*   Updated: 2024/11/18 15:58:42 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr(int nb)
{
	int	print_count;

	print_count = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb > 9)
		print_count += ft_put_nbr((nb / 10));
	if (nb < 0)
	{
		nb = -nb;
		print_count += ft_putchar('-');
		print_count += ft_put_nbr(nb);
	}
	else
		print_count += ft_putchar(nb % 10 + '0');
	return (print_count);
}
