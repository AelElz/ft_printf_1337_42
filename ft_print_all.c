/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:26:05 by aelelz            #+#    #+#             */
/*   Updated: 2024/11/18 14:45:29 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	ft_putchar_pf(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_print_str(char	*s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_pf(int n)
{
	int		nbr;
	char	*convert;

	nbr = 0;
	convert = ft_itoa(n);
	nbr = ft_print_str(convert);
	free(convert);
	return (nbr);
}

int	ft_print_per(void)
{
	write (1, "%", 1);
	return (1);
}
