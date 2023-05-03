/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:22:44 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/03 18:23:26 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}	
}

// int main ()
// {
// 	t_list	*list;
// 	t_list	*new_node;
//
// 	list = NULL;
// 	new_node = ft_lstnew("eu sou primeiro node");
// 	ft_lstadd_front(&list, new_node);
//
// 	new_node = ft_lstnew("agora eu sou o primeiro node");
// 	ft_lstadd_front(&list, new_node);
//
// 	new_node = ft_lstnew("eu que sou agora");
// 	ft_lstadd_front(&list, new_node);
//
// 	void print(void *lst)
// 	{
// 		printf("O conteudo da lista neste nó é: %s\n", (char*)lst);
// 	}
//	
// 	ft_lstiter(list, &print);
// }