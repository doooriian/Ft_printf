/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:12:27 by doley             #+#    #+#             */
/*   Updated: 2024/10/16 16:43:19 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_convert(char type, va_list args)
{
	if (type == 'c')
		return (ft_print_c(args));
	else if (type == 's')
		return (ft_print_s(args));
	else if (type == 'p')
		return (ft_print_p(args));
	else if (type == 'd' || type == 'i')
		return (ft_print_d_i(args));
	else if (type == 'u')
		return (ft_print_u(args));
	else if (type == 'x')
		return (ft_print_x_xx(args, 'x'));
	else if (type == 'X')
		return (ft_print_x_xx(args, 'X'));
	else if (type == '%')
	{
		ft_putchar('%');
		return (1);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	size_t	i;
	va_list	args;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_convert(str[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
