/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:33:51 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/12 23:26:21 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_arg(const char *format, int i, va_list ap)
{
	int buffer;

	buffer = 0;
	if(format[i + 1] == '%')
		buffer += (ft_putchar(format[i + 1]));
	else if(format[i + 1] == 'c')
		buffer += (ft_putchar(va_arg(ap, int)));
	else if(format[i + 1] == 's')
		buffer += (ft_putstr(va_arg(ap, char*)));
	else if(format[i + 1] == 'p')
		buffer += (ft_putptr(va_arg(ap, void*)));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		buffer += (ft_putnbr(va_arg(ap, int)));
	else if(format[i + 1] == 'u')
		buffer += (ft_putunbr(va_arg(ap, unsigned int)));
		
	return (buffer);
	}

int ft_printf(const char *format, ...)
{
	va_list ap;
	int i;
	int buffer;

	
	i = 0;
	buffer = 0;
	va_start(ap, format);
	
	while (format[i])
	{
		if(format[i] == '%' && ft_strchr("cspdiuxX%", format [i + 1]))
		{
			buffer += ft_printf_arg(format, i, ap);
			i++;
		}
		else
		{
			buffer += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (buffer);
}



// int main ()
// {
// 	char * c = "abc";
// 	ft_printf("O char é: %c.\nA string é: %s.\nO ptr é: %p.\nO decimal é: %d.\n ", 'C' , "String", c, 245);
// 	ft_printf("O unsigned int é: %u\n", 523);
// }