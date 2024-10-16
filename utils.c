/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:35:22 by doley             #+#    #+#             */
/*   Updated: 2024/10/16 16:43:15 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr_pos(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
		count += ft_putnbr_pos(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
}

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		count++;
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
}

int	ft_putnbr_hexa(unsigned long nb, char format)
{
	int		count;
	char	*base;

	count = 0;
	base = NULL;
	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	if (nb >= 16)
		count += ft_putnbr_hexa(nb / 16, format);
	count += ft_putchar(base[nb % 16]);
	return (count);
}
