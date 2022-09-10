/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:05:55 by puttasa           #+#    #+#             */
/*   Updated: 2022/09/10 18:12:13 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;

	if (str == NULL)
	{
		len += ft_putstr("(null)");
		return (len);
	}
	while (*str)
	{
		len += ft_putchar(*str);
		str++;
	}
	return (len);
}
