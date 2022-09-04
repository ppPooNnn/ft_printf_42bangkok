/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:45:10 by puttasa           #+#    #+#             */
/*   Updated: 2022/09/04 15:50:00 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ptr_arg;
	int		value;

	va_start(ptr_arg, str);
	value = 0;
	while (str)
	{
		if (*str == '%')
		{
			value += ft_check(ptr_arg, str + 1);
			str++;
		}
		else
			value += ft_putchar(str);
		str++;
	}
	va_end(ptr_arg);
	return (value);
}

int	ft_check(va_list ptr_arg, const char str)
{
	if (*str == 'c')
		return (ft_putchar(ptr_arg));
/*	else if (*str == 's')
		return (ft_putstr(ptr_arg));
	else if (*str == 'p')
		return (ft_putptr(ptr_arg));
	else if (*str == 'd')
		return (ft_putnbr(ptr_arg));
	else if (*str == 'i')
		return (ft_putint(ptr_arg));
	else if (*str == 'u')
		return (ft_put_unsigned_nbr(ptr_arg));
	else if (*str == 'x')
		return (ft_put_lowhex(ptr_arg));
	else if (*str == 'X')
		return (ft_put_uphex(ptr_arg));		*/
	else if (*str == '%')
		return (ft_putchar('%'));
	return (0);
}
