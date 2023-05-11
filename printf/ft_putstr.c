/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:36:44 by admin             #+#    #+#             */
/*   Updated: 2023/05/11 21:59:18 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
    int len;
    if(!str)
    {
        write (1,"(null)", 6);
        return (6);
    }
    len = ft_strlen(str);
    write(1,str,len);
    return (len);
}