/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:49:55 by aelelz            #+#    #+#             */
/*   Updated: 2024/11/16 18:49:36 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
int	ft_hex_len(unsigned	int num)
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

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hex_len(num));
}
/*int main(void)
{
    unsigned int num1 = 255;      // Example decimal number
    unsigned int num2 = 4095;     // Example larger decimal number
    unsigned int num3 = 0;        // Special case
    int length;

    printf("Testing ft_print_hex:\n");

    printf("Hexadecimal of %u (lowercase): ", num1);
    length = ft_print_hex(num1, 'x');
    printf(" (Length: %d)\n", length);

    printf("Hexadecimal of %u (uppercase): ", num1);
    length = ft_print_hex(num1, 'X');
    printf(" (Length: %d)\n", length);

    printf("Hexadecimal of %u (lowercase): ", num2);
    length = ft_print_hex(num2, 'x');
    printf(" (Length: %d)\n", length);

    printf("Hexadecimal of %u: ", num3);
    length = ft_print_hex(num3, 'x');
    printf(" (Length: %d)\n", length);

    return 0;
}*/
