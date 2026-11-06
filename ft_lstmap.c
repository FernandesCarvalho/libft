/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:55:09 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/04 20:11:49 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/* void *to_uppercase(void *content)
{
	char *new_str;
	char *str;
	int i = 0;

	str = (char *)content;
	
	new_str = ft_strdup(str);
	
	if(!new_str)
		return (NULL);
	while (new_str[i])
	{
		new_str[i] = ft_toupper(new_str[i]);
		i++;
	}
	return ((void *)new_str);
}


int main()
{
	t_list *node;
	t_list *list;
	t_list *new_node;

	list = NULL;
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Primeiro")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Segundo")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("Terceiro")));

	node = list;

	printf("\nANTES:\n");
	while (node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}
	
	new_node = ft_lstmap(list, to_uppercase, free);
	node = new_node;

	printf("\nCOPIA DEPOIS DO LSTMAP:\n");
	while (node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}

	node = list;
	
	printf("\nORIGINAL DEPOIS DO LSTMAP\n");
	while (node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}
	ft_lstclear(&list, free);
	ft_lstclear(&new_node, free);
} */