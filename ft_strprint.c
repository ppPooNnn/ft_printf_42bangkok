/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:52:50 by puttasa           #+#    #+#             */
/*   Updated: 2022/09/10 17:41:09 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chrprint(va_list ptr_arg)
{
	char	c;

	c = va_arg(ptr_arg, int);
	return (ft_putchar(c));
}

int	ft_strprint(va_list ptr_arg)
{
	char	*str;

	str = va_arg(ptr_arg, char *);
	if (!str)
		return (ft_putstr("(null)"));
	return (ft_putstr(str));
}
