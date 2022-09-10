/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: puttasa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:43:04 by puttasa           #+#    #+#             */
/*   Updated: 2022/09/10 17:12:27 by puttasa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *, ...);
int		ft_check(va_list ptr_arg, const char str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_chrprint(va_list ptr_arg);
int		ft_strprint(va_list ptr_arg);
int		ft_nbrprint(int nb);
int		ft_unsigned_print(unsigned int nb);
int		ft_lowhex_print(unsigned int n);
int		ft_uphex_print(unsigned int n);
size_t	ft_strlen(const char *str);

#endif
