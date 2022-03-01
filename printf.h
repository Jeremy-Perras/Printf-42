/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:36:27 by jperras           #+#    #+#             */
/*   Updated: 2022/03/01 15:18:07 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <unistd.h>
# include <stdarg.h>
typedef void	(*t_cho)(va_list, int *);
void			ft_putchar(char c);
void			ft_read(const char *format, int *i, int *j);
void			ft_readnbr(int nb, int *j);
void			ft_readabsnbr(unsigned int nb, int *j);
void			ft_string(va_list ap, int *i);
void			ft_char(va_list ap, int *i);
void			ft_putnbr(va_list ap, int *i);
void			ft_absputnbr(va_list ap, int *i);
void			ft_putadr(va_list ap, int *i);
void			ft_puthexa(unsigned long long b, int *i);
void			ft_puthexax(va_list ap, int *i);
void			ft_puthexaX(va_list ap, int *i);

#endif
