/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:09:20 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:37:09 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	my_func(unsigned int i, char c)
{
	if (i % 2 == 0)
		c = 'z';
	return (c);
}

int	main(void)
{
	char	*str = "abra cadabra";
	char	*res;

	res = ft_strmapi(str, my_func);
	printf("%s\n", res);

	free(res);
	return (0);
}*/
