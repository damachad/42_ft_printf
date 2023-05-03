/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:09:44 by damachad          #+#    #+#             */
/*   Updated: 2023/05/03 14:42:59 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "./libft/libft.h"
#include <stdio.h>

int	main(void)
{
	int		size;
	void	*ptr;

	ptr = &size;
	size = 0;
	printf("ft_printf:\n");
	size = ft_printf("address %p\n", ptr);
	printf("size ft_printf: %i\n", size);
	printf("\nprintf:\n");
	size = 0;
	size = printf("address %p\n", ptr);
	printf("size printf: %i\n", size);
	return (0);
}
