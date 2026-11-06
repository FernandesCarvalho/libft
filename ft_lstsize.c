/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:07:04 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/04 20:17:34 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/* int main()
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
	
	printf("\nQUANTIDADE DE NOS:\n");
	printf("%i\n", ft_lstsize(list));

	ft_lstclear(&list, NULL);
	return (0);
} */