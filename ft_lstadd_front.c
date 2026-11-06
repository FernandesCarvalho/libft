/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 10:44:40 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/04 20:11:17 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*

int main()
{
	t_list *list;
	t_list *node;

	list = NULL;
	node = ft_lstnew("Primeiro");
	ft_lstadd_front(&list, node);

	node = ft_lstnew("Segundo");
	ft_lstadd_front(&list, node);

	node = ft_lstnew("Terceiro");
	ft_lstadd_front(&list, node);

	node = list;
	while (node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}

	ft_lstclear(&list, NULL);
	return (0);
} */
