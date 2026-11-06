/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 15:11:02 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/04 18:46:10 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*nbr;

	nbr = (unsigned char *)s;
	while (n > 0)
	{
		*nbr = (unsigned char)0;
		nbr++;
		n--;
	}
}
/*   
int main()
{
	int i = 0;
	char c[] = "hello";
	printf("%s\n", c);
	ft_bzero(c , 6);
	while (i < 5)
	{
		printf("%d ", c[i]);
		i++;
	}
	return (0);
} */