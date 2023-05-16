/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:01:06 by crocha-s          #+#    #+#             */
/*   Updated: 2023/05/06 10:17:43 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	first = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while (first)
			{
				new = first->next;
				(*del)(first->content);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}

// int main()
// {
//	
// }

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *first; // Ponteiro para o primeiro elemento da nova lista
    t_list *new; // Ponteiro para um novo elemento da lista

    first = NULL; // Inicializa o ponteiro first como NULL
    if (!lst || !f || !del) // Verifica se lst, f e del são diferentes de NULL
        return (NULL); // Retorna NULL se algum deles for NULL, indicando uma condição inválida

    while (lst) // Loop para percorrer a lista original
    {
        new = ft_lstnew((*f)(lst->content)); // Cria um novo elemento da lista usando a função f no conteúdo do elemento atual de lst

        if (!new) // Verifica se ocorreu um erro ao criar o novo elemento
        {
            while (first) // Se ocorreu um erro, percorre a nova lista e libera a memória alocada
            {
                new = first->next; // Armazena o próximo elemento da lista antes de liberar a memória
                (*del)(first->content); // Chama a função del para liberar a memória do conteúdo do elemento atual
                free(first); // Libera a memória do elemento atual
                first = new; // Move para o próximo elemento da lista
            }

            lst = NULL; // Define lst como NULL para sair do loop externo
            return (NULL); // Retorna NULL para indicar um erro
        }

        ft_lstadd_back(&first, new); // Adiciona o novo elemento à nova lista, adicionando-o ao final
        lst = lst->next; // Move para o próximo elemento da lista original
    }

    return (first); // Retorna a nova lista
}
