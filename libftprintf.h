/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <damachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:15:25 by damachad          #+#    #+#             */
/*   Updated: 2023/05/03 14:25:37 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putchar_2(char c);
int		ft_convert(char format, va_list args);
int		ft_putnbr_base(int n, char *base_set, int base);
int		ft_putstr_2(char *s);
int		ft_putnbr_2(int n);
int		ft_printf(const char *str, ...);
void	ft_printnumb(unsigned int x, int *size);

#endif
