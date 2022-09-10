/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:27:00 by puttasa           #+#    #+#             */
/*   Updated: 2022/09/10 10:55:02 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrprint(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb = -nb;
	}
	if (nb / 10)
		len += ft_nbrprint(nb / 10);
	len += ft_putchar(nb % 10 + '0');
	return (len);
}
