/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 00:07:58 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/03 18:57:49 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int n)
{
	if ((n >= 'a' && n <= 'z')
		|| (n >= 'A' && n <= 'Z'))
		return (1);
	return (0);
}
/* #include<stdio.h>
#include<string.h>

int main()
{
	char a = 'a';
	char b = 'd';
	char c = 21;
	char d = '-';
	char e = 'K';
	char f = '9';

	printf("%i\n", ft_isalpha(a));
	printf("%i\n", ft_isalpha(b));
	printf("%i\n", ft_isalpha(c));
	printf("%i\n", ft_isalpha(d));
	printf("%i\n", ft_isalpha(e));
	printf("%i\n", ft_isalpha(f));
	return (0);
} */