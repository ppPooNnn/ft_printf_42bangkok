/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:08:15 by puttasa           #+#    #+#             */
/*   Updated: 2022/09/10 11:11:10 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_print(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb / 10)
		len += ft_unsigned_print(nb / 10);
	len += ft_putchar(nb % 10 + '0');
	return (len);
}
