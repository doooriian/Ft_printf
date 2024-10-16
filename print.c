/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:33:51 by doley             #+#    #+#             */
/*   Updated: 2024/10/16 16:43:10 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_c(va_list args)
{
	char	c;

	c = va_arg(args, int);
	return (ft_putchar(c));
}

int	ft_print_s(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
		return (ft_putstr("(null)"));
	return (ft_putstr(str));
}

int	ft_print_p(va_list args)
{
	int				count;
	unsigned long	address;

	count = 0;
	address = (unsigned long)va_arg(args, void *);
	if (address == 0)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_putnbr_hexa(address, 'x');
	return (count);
}

int	ft_print_d_i(va_list args)
{
	int	nb;

	nb = va_arg(args, int);
	return (ft_putnbr(nb));
}

int	ft_print_u(va_list args)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	return (ft_putnbr_pos(nb));
}
