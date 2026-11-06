/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fercarva <fercarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 10:08:27 by fercarva          #+#    #+#             */
/*   Updated: 2026/11/05 17:57:31 by fercarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static void	ft_free_matrix(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

static int	ft_fill(char **strs, char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			strs[i] = ft_substr(s, 0, len);
			if (!strs[i])
			{
				ft_free_matrix(strs, i);
				return (1);
			}
			i++;
			s += len;
		}
		else
			s++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		tab;

	if (!s)
		return (NULL);
	tab = ft_count_words(s, c);
	strs = ft_calloc((tab + 1), sizeof(char *));
	if (!strs)
		return (NULL);
	if (ft_fill(strs, s, c))
		return (NULL);
	return (strs);
}

/* int main()
{
	char *str = "Eu quero ir la fora fumar um basevaldo";
	char **strs;
	
	printf("\nAntes do Split:\n%s\n\n", str);

	strs = ft_split(str, ' ');
	
	printf("Depois do Split:\n");
	
	for (int i = 0; strs[i]; i++)
		printf("%s\n", strs[i]);
	return (0);
} */