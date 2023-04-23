/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:19:59 by admin             #+#    #+#             */
/*   Updated: 2023/04/22 17:09:46 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

    str = (char *)malloc(*s1+1);

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1 + i);
	while (ft_strchr(set, s1[i + len]))
		len--;
	if (!(str == ft_substr(s1, i, len + 1)))
		return (NULL);
	return (str);
}
