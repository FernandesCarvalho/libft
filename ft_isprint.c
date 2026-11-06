/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 10:09:19 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/03 19:07:10 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int n)
{
	if (n >= 32 && n <= 126)
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

	printf("%i\n", ft_isprint(a));
	printf("%i\n", ft_isprint(b));
	printf("%i\n", ft_isprint(c));
	printf("%i\n", ft_isprint(d));
	printf("%i\n", ft_isprint(e));
	printf("%i\n", ft_isprint(f));
	return (0);
} */