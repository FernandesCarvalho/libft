/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:33:04 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/04 20:11:22 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

/* 
int main()
{
	t_list *list;
	t_list *node;

	list = NULL;
	node = ft_lstnew(ft_strdup("Primeiro\n"));
	ft_lstadd_back(&list, node);
	
	node = ft_lstnew(ft_strdup("Segundo\n"));
	ft_lstadd_back(&list, node);

	node = list;
	while (node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}
	ft_lstclear(&list, free);
	if (!list)
		printf("Lista vazia\n");
	else
		printf("Nao ha mais nada na lista\n");
	return (0);
} */
