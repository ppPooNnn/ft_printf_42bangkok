/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:52:50 by puttasa           #+#    #+#             */
/*   Updated: 2022/09/09 17:29:00 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chrprint(va_list ptr_arg)
{
	char	c;

	c = va_arg(ptr_arg, int);
	return (ft_putchar(c));
}
/*
int	ft_strprint(va_list ptr_arg)
{

}*/
