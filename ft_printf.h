/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:43:04 by puttasa           #+#    #+#             */
/*   Updated: 2022/09/11 09:33:23 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_check(va_list ptr_arg, const char str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_nbrprint(int nb);
int		ft_unsigned_print(unsigned int nb);
int		ft_lowhex_print(unsigned int n);
int		ft_uphex_print(unsigned int n);
int		ft_ptrprint(unsigned long n);

#endif
