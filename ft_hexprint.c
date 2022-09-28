/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:43:20 by puttasa           #+#    #+#             */
/*   Updated: 2022/09/10 17:13:35 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowhex_print(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_lowhex_print(n / 16);
	if (n % 16 > 9)
		len += ft_putchar(n % 16 + 'a' - 10);
	else
		len += ft_putchar(n % 16 + '0');
	return (len);
}

int	ft_uphex_print(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_uphex_print(n / 16);
	if (n % 16 > 9)
		len += ft_putchar(n % 16 + 'A' - 10);
	else
		len += ft_putchar(n % 16 + '0');
	return (len);
}
