/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 01:00:50 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/05 11:22:06 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}

/* int main ()
{
	char *s1 = "Casa";
	char *s2 = "Casa";

	char *s3 = "Casa";
	char *s4 = "Cama";

	char *s5 = "Casa";
	char *s6 = "Cama";

	char *s7 = "abcdefghijkm";
	char *s8 = "abcdefghijkm";

	char *s9 = "abcdefghijkm";
	char *s10 = "abcdefghijkl";

	printf("%i\n", ft_memcmp(s1, s2, 4));
	printf("%i\n", ft_memcmp(s3, s4, 4));
	printf("%i\n", ft_memcmp(s5, s6, 2));
	printf("%i\n", ft_memcmp(s7, s8, 12));
	printf("%i\n", ft_memcmp(s9, s10, 12));

	return (0);
} */