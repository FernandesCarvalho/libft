/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:25:40 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/06 11:50:33 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	length;

	length = ft_strlen(s);
	if (length <= start)
		return (ft_strdup(""));
	if (len > length - start)
		length = length - start;
	else
		length = len;
	str = malloc(length + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s + start), (length + 1));
	return (str);
}

/* int main()
{
	char *str1 = "Hello 42Porto!!";
	int i = 6;
	int j = 8;

	printf("%s\n", ft_substr(str1, i, j));
	return (0);
} */
