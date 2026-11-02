/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 10:28:41 by fercarva          #+#    #+#             */
/*   Updated: 2026/08/28 10:02:11 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	temp_dst;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	temp_dst = dst_len;
	while (*src && temp_dst < dstsize - 1)
	{
		dst[temp_dst] = *src;
		temp_dst++;
		src++;
	}
	dst[temp_dst] = '\0';
	return (dst_len + src_len);
}
