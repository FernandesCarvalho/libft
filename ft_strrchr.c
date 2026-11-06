/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:46:04 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/06 12:44:25 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*string;
	unsigned char	uc;

	uc = (unsigned char)c;
	string = NULL;
	while (*str)
	{
		if (*str == uc)
			string = (char *)str;
		str++;
	}
	if (*str == uc)
		return ((char *)str);
	return (string);
}
