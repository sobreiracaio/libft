/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:23:46 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/13 18:14:25 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"

int ft_printf(const char *format, ...);
int ft_putchar(char c);        //Put char
int ft_putstr(char *str);      //Put string
int ft_putptr(unsigned long ptr);      //Put pointer
int	ft_putnbr(int n);          //Put decimals
int ft_putunbr(unsigned int nb); //Put unsigned int
char	*ft_uitoa(unsigned int n);
int ft_puthex(unsigned int nb, char format);

#endif