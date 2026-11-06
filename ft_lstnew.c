/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 10:35:51 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/04 20:08:26 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/* int main()
{
	t_list *new_list;
	
	new_list = ft_lstnew((ft_strdup("Node test\n")));
	printf("\nNode criado:\n");
	printf("%s\n", (char *)new_list->content);
	ft_lstclear(&new_list, free);
} */