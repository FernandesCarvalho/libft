/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mencpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 13:09:03 by fercarva          #+#    #+#             */
/*   Updated: 2026/08/28 09:54:35 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		*dest;

	ptr = (const unsigned char *)src;
	dest = (unsigned char *)dst;
	while (n > 0)
	{
		*dest = *ptr;
		ptr++;
		dest++;
		n--;
	}
	return (dst);
}
