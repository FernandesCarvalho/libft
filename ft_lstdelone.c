/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:04:33 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/04 20:11:28 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*

int main()
{
	t_list *node;
	t_list *second;
	t_list *list;

	list = NULL;
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Primeiro")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Segundo")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Terceiro")));
	printf("ANTES:\n");
	node = list;
	while(node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}

	second = list->next;
	list->next = second->next;
	ft_lstdelone(second, free);

	printf("\nDEPOIS:\n");
	printf("Primeiro: %s\n", (char *)list->content);
	printf("Terceiro: %s\n", (char *)list->next->content);

	free(list->content);
	free(list->next->content);
	free(list->next);
	free(list);
		
} */