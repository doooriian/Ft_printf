/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_part_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doley <doley@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:54:17 by doley             #+#    #+#             */
/*   Updated: 2024/10/16 15:58:10 by doley            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_x_X(va_list args, char format)
{
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	return (ft_putnbr_hexa((unsigned long)nb, format));
}
