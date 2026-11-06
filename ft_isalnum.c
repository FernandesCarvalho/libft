/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 09:58:47 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/03 18:54:15 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	if ((n >= 'a' && n <= 'z')
		|| (n >= 'A' && n <= 'Z')
		|| (n >= '0' && n <= '9'))
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

	printf("%i\n", ft_isalnum(a));
	printf("%i\n", ft_isalnum(b));
	printf("%i\n", ft_isalnum(c));
	printf("%i\n", ft_isalnum(d));
	printf("%i\n", ft_isalnum(e));
	printf("%i\n", ft_isalnum(f));
	return (0);
} */