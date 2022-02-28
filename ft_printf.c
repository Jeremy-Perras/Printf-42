/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 08:14:35 by jperras           #+#    #+#             */
/*   Updated: 2022/02/28 18:13:17 by jperras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include "ft_useprintf.c"
#include "ft_cho.c"
#include <unistd.h>
#define taille

typedef int *(*ft_cho) (va_list, int *);
//ft_cho choose[taille]={&ft_string};
ft_cho choose[taille]={['s'] = ft_string,['c'] = ft_char};

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int 	a;
	int		*i;
	int		*b; 
	int 	j;

	i = &j;
	*i = 0;
	b = &a;
	*b = 0;
	va_start(ap, format);
	while(format[j] != '\0')
	{
		ft_read(format +(a), b, i);
		if (format[*b] != '\0')
		{
			choose[format[a + 1]](ap, b);
			j = j + 2;
		}
		//printf("\na:%d\n j:%d",a,j);
		ft_read(format + j, b, i);
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

	i = ft_printf("Bonjour %s et les enfants","les adultes");
	//j = printf("Bonjour %s et les enfants","les adultes");
	printf("\n%d \n", i);

}



