/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:10:13 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:50:36 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_new_str(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len <= 0 || start >= (size_t)-1)
		len = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_in_set(s1[start], set))
		start++;
	end = 0;
	while (s1[end])
		end++;
	while (end > start && ft_in_set(s1[end - 1], set))
		end--;
	return (ft_new_str(s1, start, end - start));
}
/*
int	main(void)
{
	char	*s1 = "   xxx   Hello World   xxx   ";
	char	*set = " xds";
	char	*res;

	res = ft_strtrim(s1, set);

	printf("res : |%s|\n", res);

	free(res);
	return (0);
}*/
