/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 13:09:03 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/05 13:39:00 by fercarva         ###   ########.fr       */
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

/* int main()
{
	char src1[] = "String";
	char dest1[] = "42port";
	char dest2[] = "42port";
	ft_memcpy(dest1, src1, 4);
	ft_memcpy(dest2, src1, 7);
	printf("%s\n", dest1);
	printf("%s\n", dest2);

	return (0);
} */