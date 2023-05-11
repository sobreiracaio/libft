/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:33:51 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/11 19:51:41 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_arg(const char *format, int i, va_list ap)
{
	if(format[i + 1] == '%')
		return (ft_putchar(format[i + 1]));
	if(format[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
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



// int main ()
// {
// 	ft_printf("asdas %c das %c d", 'A' , 'B');
// }