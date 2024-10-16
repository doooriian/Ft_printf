/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:02:54 by doley             #+#    #+#             */
/*   Updated: 2024/10/16 16:43:32 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

/* UTILS */

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr_pos(unsigned int nb);
int	ft_putnbr(int nb);
int	ft_putnbr_hexa(unsigned long nb, char format);

/* PRINT */
int	ft_print_c(va_list args);
int	ft_print_s(va_list args);
int	ft_print_p(va_list args);
int	ft_print_d_i(va_list args);
int	ft_print_u(va_list args);
int	ft_print_x_xx(va_list args, char format);

/* MAIN */
int	ft_printf(const char *str, ...);
int	ft_convert(char type, va_list args);

#endif