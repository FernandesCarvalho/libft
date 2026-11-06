/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 12:18:47 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/06 11:38:20 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	strlen;

	strlen = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big && len > 0)
	{
		if (len >= strlen && ft_strncmp(big, little, strlen) == 0)
			return ((char *)big);
		len--;
		big++;
	}
	return (NULL);
}
/* int main()
{
	char *s1 = "Hello World!!";
	char *s2 = "lo";

	printf("%s\n", ft_strnstr(s1, s2, 5));
	return (0);
} */