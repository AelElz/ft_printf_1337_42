/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:58:01 by aelelz            #+#    #+#             */
/*   Updated: 2024/11/22 16:48:56 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_nbr(int nbr)
{
	int	print_count;

	print_count = 0;
	if (nbr == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nbr > 9)
		print_count += ft_put_nbr((nbr / 10));
	if (nbr < 0)
	{
		nbr = -nbr;
		print_count += ft_putchar('-');
		print_count += ft_put_nbr(nbr);
	}
	else
		print_count += ft_putchar(nbr % 10 + '0');
	return (print_count);
}
