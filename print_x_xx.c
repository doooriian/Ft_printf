/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x_xx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:54:17 by doley             #+#    #+#             */
/*   Updated: 2024/10/16 16:43:28 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_x_xx(va_list args, char format)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	return (ft_putnbr_hexa((unsigned long)nb, format));
}
