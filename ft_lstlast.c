/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:25:03 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/04 18:46:10 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*   

int main()
{
	t_list *node;
	t_list *list;

	list = NULL;
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Primeiro")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Segundo")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Terceiro")));
	
	node = list;

	printf("TODOS OS CONTEUDOS:\n");
	while(node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}
	printf("\nDepois do lstlast:\n");
	printf("%s\n", (char *)ft_lstlast(list)->content);
	ft_lstclear(&list, free);
} */