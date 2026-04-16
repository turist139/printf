/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:08:40 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:36:37 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_word_dup(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	*ft_free_all(char **strs, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	**ft_fill(char **res, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] != c)
		{
			start = j;
			while (s[j] && s[j] != c)
				j++;
			res[i] = ft_word_dup(s, start, j);
			if (!res[i])
				return (ft_free_all(res, i));
			i++;
		}
		else
			j++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (ft_fill(res, s, c));
}
/*
int	main(void)
{
	char	*str = "  Hello   42 Lets Go!";
	char	c = ' ';
	char	**result;
	int		i;

	result = ft_split(str, c);

	i = 0;
	while (result[i] != NULL)
	{
		printf("Word %d: |%s|\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
