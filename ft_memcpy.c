/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 13:09:03 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/06 12:42:49 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		*dest;
	size_t				i;

	if (!dst && !src)
		return (dst);
	dest = (unsigned char *)dst;
	ptr = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = ptr[i];
		i++;
	}
	return (dst);
}
