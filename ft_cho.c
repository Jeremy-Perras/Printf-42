/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cho.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:19:21 by jperras           #+#    #+#             */
/*   Updated: 2022/02/28 17:56:22 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <stdio.h>

void	ft_string(va_list ap, int *i)
{
	const char	*c;

	c = va_arg(ap, const char *);
	while (*c)
	{
		ft_putchar(*c++);
		*i=*i +1;
	}
}
void	ft_char(va_list ap, int *i)
{
	int	c;
	c =  va_arg(ap, int);
	ft_putchar(c);
	*i = *i + 1;
}
