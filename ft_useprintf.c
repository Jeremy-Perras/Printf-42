/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_useprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:47:30 by jperras           #+#    #+#             */
/*   Updated: 2022/02/28 17:56:37 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_read(const char *format, int *i, int *j)
{
	while (*format != '%' && *format != '\0')
	{
		ft_putchar((char) * format++);
		*i = *i + 1;
		*j = *j + 1;
		
	}
}
