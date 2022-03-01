/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cho.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:19:21 by jperras           #+#    #+#             */
/*   Updated: 2022/03/01 15:18:28 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

void	ft_string(va_list ap, int *i)
{
	const char	*c;

	c = va_arg(ap, const char *);
	while (*c)
	{
		ft_putchar(*c++);
		*i = *i + 1;
	}
}

void	ft_char(va_list ap, int *i)
{
	int	c;

	c = va_arg(ap, int);
	ft_putchar(c);
	*i = *i + 1;
}

void	ft_putnbr(va_list ap, int *i)
{
	int	nb;

	nb = va_arg(ap, int);
	ft_readnbr(nb, i);
}

void	ft_absputnbr(va_list ap, int *i)
{
	unsigned int	nb;

	nb = va_arg(ap, unsigned int);
	ft_readabsnbr(nb, i);
}

void	ft_putadr(va_list ap, int *i)
{
	unsigned long long	b;
	
	b = va_arg(ap, unsigned long long);
	*i = *i + 1;
	ft_puthexa(b, i);
}
