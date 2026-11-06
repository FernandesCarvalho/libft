/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 10:06:04 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/03 19:05:18 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
		return (1);
	return (0);
}
/* #include<stdio.h>
#include<string.h>

int main()
{
	int a = 'a';
	int b = 'd';
	int c = 21;
	int d = 128;
	int e = -1;
	int f = '9';

	printf("%i\n", ft_isascii(a));
	printf("%i\n", ft_isascii(b));
	printf("%i\n", ft_isascii(c));
	printf("%i\n", ft_isascii(d));
	printf("%i\n", ft_isascii(e));
	printf("%i\n", ft_isascii(f));
	return (0);
} */