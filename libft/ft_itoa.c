/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:00:41 by crocha-s          #+#    #+#             */
/*   Updated: 2023/04/23 19:37:28 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int n_len(long n)
{
	int len;
	
	len = 0;
	if (n ==0)
	{
		len = 1;
		return (len);
	}
	
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while(n > 0)
	{
		n = n /10;
		len ++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	char *result;
	long int number;
	int lenght;
	
	number = n;
	lenght = n_len(number);
	result = (char*)malloc(sizeof(char) * (lenght + 1));

	if(!result)
		return (NULL);
	result[lenght--] = '\0';
	//lenght--;
	if (number == 0)
	{
		result[0] = 48;
		return (result);
	}
	if (number < 0)
	{
		result[0] = '-';
		number = number * -1;
	}
	while (number > 0)
	{
		result[lenght] = 48 + (number % 10);
		number = number /10;
		lenght--;
	}
	return (result);
		
}

