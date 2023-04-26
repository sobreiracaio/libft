/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crocha-s <crocha-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:17:01 by crocha-s          #+#    #+#             */
/*   Updated: 2023/04/26 18:43:29 by crocha-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{	
	unsigned int	i;
	char			*str;
	char			*result;

	if (!s || !(*s))
		return (ft_strdup(""));
	str = (char *)s;
	result = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (str[i])
	{
		result [i] = f(i, str[i]);
		i++;
	}
	result [i] = '\0';
	return (result);
}
