/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:51:09 by damachad          #+#    #+#             */
/*   Updated: 2023/05/03 14:07:41 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_dig(int n)
{
	char	e;

	e = n + '0';
	write(1, &e, 1);
}

static void	into_array(int n_digit, int n)
{
	int	digits[10];
	int	count;
	int	i;

	i = 0;
	count = n_digit;
	while (n_digit > 0)
	{
		digits[n_digit - 1] = n % 10;
		n = n / 10;
		n_digit--;
	}
	while (i < count)
	{
		write_dig(digits[i]);
		i++;
	}
}

static void	inv(int *ptr)
{
	*ptr *= -1;
	write(1, "-", 1);
}

int	ft_putnbr_2(int n)
{
	int	np;
	int	count;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
		inv(&n);
	np = n;
	if (np < 10)
	{
		write_dig(np);
		return (1);
	}
	count = 0;
	while (np > 0)
	{
		np = np / 10;
		count++;
	}
	into_array(count, n);
	return (count);
}