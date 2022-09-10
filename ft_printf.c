/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:45:10 by puttasa           #+#    #+#             */
/*   Updated: 2022/09/10 11:16:10 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ptr_arg;
	int		value;

	va_start(ptr_arg, str);
	value = 0;
	while (*str)
	{
		if (*str == '%')
		{
			value += ft_check(ptr_arg, *(str + 1));
			str++;
		}
		else
			value += ft_putchar(*str);
		str++;
	}
	va_end(ptr_arg);
	return (value);
}

int	ft_check(va_list ptr_arg, const char str)
{
	if (str == 'c')
		return (ft_chrprint(ptr_arg));
	else if (str == 's')
		return (ft_strprint(ptr_arg));
//	else if (str == 'p')
//		return (ft_ptrprint(ptr_arg));
	else if (str == 'd')
		return (ft_nbrprint(va_arg(ptr_arg, int)));
	else if (str == 'i')
		return (ft_nbrprint(va_arg(ptr_arg, int)));
	else if (str == 'u')
		return (ft_unsigned_print(va_arg(ptr_arg, unsigned int)));
/*	else if (str == 'x')
		return (ft_put_lowhex(ptr_arg));
	else if (str == 'X')
		return (ft_put_uphex(ptr_arg));		*/
	else if (str == '%')
		return (ft_putchar('%'));
	return (0);
}
