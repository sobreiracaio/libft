/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 15:00:41 by crocha-s          #+#    #+#             */
/*   Updated: 2023/04/24 20:42:50 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	n_len(long n)
{
	long	len;

	len = 0;
	if (n == 0)
	{
		len = 1;
		return (len);
	}
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			lenght;

	lenght = n_len(n);
	result = (char *)malloc(sizeof (char) * (lenght + 1));
	if (!result)
		return (NULL);
	result[lenght--] = '\0';
	if (n == 0)
	{
		result[0] = 48;
		return (result);
	}
	if (n < 0)
	{
		result[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		result[lenght] = 48 + (n % 10);
		n = n / 10;
		lenght--;
	}
	return (result);
}
