/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 22:10:42 by admin             #+#    #+#             */
/*   Updated: 2023/05/12 21:42:10 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putptr(void *ptr)
{
   unsigned long address;
   char buffer [20];
   char *hex;
   unsigned int i;
   unsigned long divider;
   unsigned int hex_index;
   
   hex = "0123456789abcdef";
   address = (unsigned long)&ptr;
  
   i = 0;
   buffer[i++] = '0';
   buffer[i++] = 'x';
   divider = 1;

   while (divider *16 <= address) 
    {
        divider = divider * 16;
       
    }
    
    while ( divider > 0 )
    {
        hex_index = (address / divider) % 16;
        buffer[i++] = hex [hex_index];
        divider = divider / 16;
    }
    write(1, buffer, i);
     write(1, "\n", 2);
     return (i);
}

// int main()
// {
//     int k;
//     k = 1;
//         ft_putptr(k);
// }