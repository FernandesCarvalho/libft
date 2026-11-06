/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 23:59:49 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/05 11:07:32 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = (const unsigned char *)s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((unsigned char *)str);
		str++;
		n--;
	}
	return (NULL);
}

/* int main ()
{
	char str[] = "Hello world!";
	
	printf("%s\n", (char *)ft_memchr(str, 'o', 8));
	printf("%s\n", (char *)ft_memchr(str, 'o', 4));
	printf("%p\n", ft_memchr(str, 'o', 8));
	
	return (0);
} */
