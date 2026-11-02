/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:25:40 by fercarva          #+#    #+#             */
/*   Updated: 2026/09/01 15:26:37 by fercarva         ###   ########.fr       */
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
