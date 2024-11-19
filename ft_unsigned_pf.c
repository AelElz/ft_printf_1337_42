/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:18:06 by aelelz            #+#    #+#             */
/*   Updated: 2024/11/19 16:02:48 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nbr)
{
	int	print_count;

	print_count = 0;
	if (nbr > 9)
		print_count += ft_print_unsigned(nbr / 10);
	print_count += ft_putchar(((nbr % 10) + '0'));
	return (print_count);
}
