/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:32:14 by ael-azha          #+#    #+#             */
/*   Updated: 2024/11/17 16:26:50 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "./libft/libft.h"

int	ft_printf(const char *format, ...);
int ft_print_hex(unsigned int num, const char format);
int ft_hex_count(unsigned int num);
void	ft_hex(unsigned int num, const char format);
int	ft_print_point(unsigned long long num);
int	ft_point_count(unsigned long long num);
void	ft_point(unsigned long long num);
void	ft_check(const char *str, va_list args);
int	ft_putchar_pf(int c);
void	ft_putstr_pf(char *s);
int	ft_print_str(char *s);
int	ft_putnbr_pf(int n);
int	ft_print_per(void);

#endif