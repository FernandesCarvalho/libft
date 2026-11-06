/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:30:35 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/04 20:11:11 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
int main()
{
	t_list *list;
	t_list *node;

	list = NULL;
	node = ft_lstnew("Primeiro");
	ft_lstadd_back(&list, node);

	node = ft_lstnew("Segundo");
	ft_lstadd_back(&list, node);

	node = ft_lstnew("Terceiro");
	ft_lstadd_back(&list, node);

	node = list;
	while (node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}

	ft_lstclear(&list, NULL);
	return (0);
} */