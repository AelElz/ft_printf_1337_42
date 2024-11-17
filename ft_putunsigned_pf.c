/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_pf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:18:06 by aelelz            #+#    #+#             */
/*   Updated: 2024/11/17 18:36:36 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_unsigned_count(unsigned int num)
{
	int len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}
int ft_unsigned(unsigned int num)
{
	char    *str;
	int     len;

	len = ft_unsigned_count(num);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '\0';
	else
	{
		while (num != 0)
		{
			--len;
			str[len] = (num % 10) + '0';
			num / 10;
		}
	}
	return (str);
}
int	ft_print_unsigned(unsigned int num)
{
	int		len;
	char	*str2;

	len = 0;	
	if (num == 0)
		write (1, "0", 1);
	else
	{
		str2 = ft_unsigned(num);
		if (str2)
		{
			len = ft_unsigned_count(num);
			free(str2);
		}
	}
	return (len);
}
