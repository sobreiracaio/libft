/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 19:19:59 by admin             #+#    #+#             */
/*   Updated: 2023/05/06 10:37:54 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1 + i);
	while (ft_strchr(set, s1[i + len]))
		len--;
	str = ft_substr(s1, i, len + 1);
	return (str);
}

// int main()
// {
// 	printf("Resultado de strtrim: %s\n", ft_strtrim("abcdefabc", "abc"));
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i; // Índice para percorrer a string inicial
	size_t	len; // Comprimento da nova string após remoção dos caracteres do conjunto
	char	*str; // Ponteiro para a nova string criada

	if (!s1 || !set) // Verifica se s1 ou set são NULL
		return (NULL); // Retorna NULL se algum deles for NULL

	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i])) // Percorre a string inicial enquanto encontrar caracteres do conjunto no início
		i++;

	len = ft_strlen(s1 + i); // Calcula o comprimento da nova string após a remoção dos caracteres do conjunto

	while (ft_strchr(set, s1[i + len])) // Verifica se há caracteres do conjunto no final da nova string
		len--;

	str = ft_substr(s1, i, len + 1); // Cria a nova string utilizando a função ft_substr para extrair a substring desejada
	return (str); // Retorna a nova string
}
