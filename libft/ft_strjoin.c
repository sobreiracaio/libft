/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:57:13 by admin             #+#    #+#             */
/*   Updated: 2023/04/21 19:17:34 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int s1_len;
    int s2_len;
    int i;
    int j;
    
    char *sum; 

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    i = 0;
    j = 0;
    
    sum = (char *)malloc((s1_len + s2_len)+1);

    if (!sum)
        return (NULL);
    if (!s1 && !s2)
        return (NULL);
    if(s1)
    {
        while(s1[i] != '\0')
        {
            sum[i] = s1[i];
            i++;
        }
    }
    if(s2)
    {
        while(s2[j])
        {
            sum[i] = s2[j];
            i++;
            j++;
        }
    }
    sum[i] = '\0';
    
    
   
   
    return (sum);
}