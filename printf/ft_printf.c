/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:33:51 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/12 01:24:36 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_arg(const char *format, int i, va_list ap)
{
	if(format[i + 1] == '%')
		return (ft_putchar(format[i + 1]));
	else if(format[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if(format[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char*)));
	else if(format[i + 1] == 'p')
		return (ft_putptr(va_arg(ap, void*)));
	
		
	return (0);
	}

int ft_printf(const char *format, ...)
{
	va_list ap;
	int i;
	int result;

	
	i = 0;
	result = 0;
	va_start(ap, format);
	
	while (format[i])
	{
		if(format[i] == '%' && ft_strchr("cspdiuxX%", format [i + 1]))
		{
			result = result + ft_printf_arg(format, i, ap);
			i++;
		}
		else
		{
			result = result + ft_putchar(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (result);
}



int main ()
{
	char * c = "abc";
	ft_printf("O char é: %c.\nA string é: %s.\nO ptr é: %p.\nO decimal é:%d.\n ", 'C' , "String", c);
}