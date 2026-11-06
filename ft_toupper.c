/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 10:24:12 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/06 12:16:41 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/* int main(int ac, char **av)
{
	char *str = av[1];
	
	if (ac == 2)
	{
		while (*str)
		{
			printf("%c", ft_toupper(*str));
			str++;
		}
		printf("\n");
		return (0);
	}
	return (1);
} */