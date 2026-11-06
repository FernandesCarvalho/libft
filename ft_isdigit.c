/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 09:39:50 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/03 19:06:25 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
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

	printf("%i\n", ft_isdigit(a));
	printf("%i\n", ft_isdigit(b));
	printf("%i\n", ft_isdigit(c));
	printf("%i\n", ft_isdigit(d));
	printf("%i\n", ft_isdigit(e));
	printf("%i\n", ft_isdigit(f));
	return (0);
} */