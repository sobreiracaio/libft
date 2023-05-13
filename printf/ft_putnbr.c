/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:32:10 by admin             #+#    #+#             */
/*   Updated: 2023/05/12 18:47:32 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;
    unsigned int len;

	nb = n;
    len = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
        len++;
	}	
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
        len++;
	}
	else
	{
		ft_putchar(nb + '0');
	}
   return (len); 
}
