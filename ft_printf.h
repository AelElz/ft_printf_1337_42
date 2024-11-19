/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelelz <aelelz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:52:01 by aelelz            #+#    #+#             */
/*   Updated: 2024/11/19 18:28:00 by aelelz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_print_point(unsigned long long num);
int		ft_point_count(unsigned long long num);
void	ft_point(unsigned long long num);
void	ft_check(const char *str, va_list args);
int		ft_putchar(int c);
int		ft_put_nbr(int nb);
int		ft_print_str(char *s);
int		ft_putstr(char *s);
int		ft_print_unsigned(unsigned int num);
int		ft_print_hex(unsigned int num, const char format);
void	ft_print_digit(unsigned int num, const char format);
int		ft_hex_count(unsigned int num);

#endif