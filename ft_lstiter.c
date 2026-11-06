/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:47:03 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/04 20:11:33 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void to_uppercase(void *content)
{
	char *str;
	int i;
	
	str = (char *)content;
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}

int main()
{
	t_list *node;
	t_list *list;

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
	node = list;
	ft_lstiter(list, to_uppercase);
	printf("\nDEPOIS:\n");
	while(node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}
	ft_lstclear(&list, free);
} */