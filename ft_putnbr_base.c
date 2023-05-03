/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:06:14 by damachad          #+#    #+#             */
/*   Updated: 2023/05/03 14:10:17 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "./libft/libft.h"

int	ft_putnbr_base(int n, char *base_set, int base)
{
	char	nbr_hex[50];
	char	*ptr;
	int		size;

	size = 0;
	ptr = &nbr_hex[49];
	*ptr = '\0';
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		size++;
	}
	while (n > 0)
	{
		*--ptr = base_set[n % base];
		n /= base;
		size++;
	}
	ft_putstr_fd(ptr, 1);
	return (size);
}
