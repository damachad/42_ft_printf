/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:56 by damachad          #+#    #+#             */
/*   Updated: 2023/05/03 15:14:09 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_convert(char format, va_list args)
{
	int	size;

	size = 0;
	if (format == 'i' || format == 'd')
		size = ft_putnbr_2(va_arg(args, int));
	if (format == 'c')
		size = ft_putchar_2((char)va_arg(args, int));
	if (format == 's')
		size = ft_putstr_2(va_arg(args, char *));
	if (format == '%')
		size = ft_putchar_2('%');
	if (format == 'p')
	{
		size = ft_putstr_2("0x");
		size += ft_putnbr_base((unsigned long int)va_arg(args, void *), "0123456789abcdef", 16);
	}
	if (format == 'u')
		size = ft_putnbr_base(va_arg(args, unsigned int), "0123456789", 10);
	if (format == 'x')
		size = ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", 16);
	if (format == 'X')
		size = ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF", 16);
	return (size);
}
