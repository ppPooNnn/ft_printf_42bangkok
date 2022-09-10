/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:20:54 by puttasa           #+#    #+#             */
/*   Updated: 2022/09/10 17:34:50 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrprint(unsigned long n)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_ptrprint(n / 16);
	if (n % 16 > 9)
		len += ft_putchar(n % 16 + 'a' - 10);
	else
		len += ft_putchar(n % 16 + '0');
	return (len);
}
