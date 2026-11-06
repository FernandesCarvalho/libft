/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 10:27:56 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/06 12:25:45 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/* int main(int ac, char **av)
{
	char *str = av[1];

	if (ac == 2)
	{
		while (*str)
		{
			printf("%c", ft_tolower(*str));
			str++;
		}
		printf("\n");
		return (0);
	}
	return (1);
} */
