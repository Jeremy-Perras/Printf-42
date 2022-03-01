/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 08:14:35 by jperras           #+#    #+#             */
/*   Updated: 2022/03/01 15:19:43 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

t_cho		g_choose[] = {['s'] = ft_string, ['c'] = ft_char,
['d'] = ft_putnbr, ['i'] = ft_putnbr,
['u'] = ft_absputnbr, ['p'] = ft_putadr,
['x'] = ft_puthexax,['X'] = ft_puthexaX };

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		a;
	int		b;
	int		*i;
	int		*j;

	i = &a;
	*i = 0;
	j = &b;
	*j = 0;
	va_start(ap, format);
	while (format[*j] != '\0')
	{
		ft_read(format + *j, i, j);
		if (format[*j] != '\0')
		{
			g_choose[(int)format[*j + 1]](ap, i);
			*j = *j + 2;
		}
	}
	va_end(ap);
	return (*i);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	int	i;
	int j;

	i = ft_printf("Bonjour %x et les Messieurs %d",15,10);
	ft_printf("\n");
	j = printf("Bonjour %x et les Messieurs %d",15,10);
	printf("\n%d \n%d\n", i,j);

}
