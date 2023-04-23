/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:03:33 by crocha-s          #+#    #+#             */
/*   Updated: 2023/04/19 17:52:00 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*source;
	size_t			i;

	source = (char *)s;
	i = 0;
	while (i < n)
	{
		if (source[i] == c)
		{
			return ((void *)source + i);
		}
		i++;
	}
	return (NULL);
}
