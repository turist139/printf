/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:08:45 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:48:47 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	f;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	f = (char)c;
	str = (char *)s;
	while (i < len + 1)
	{
		if (str[i] == f)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int main ()
{
	char s [40] = "ASDFGHJKLqwerty79464qwertyGGG";
	printf("%s\n", ft_strchr(s, 'H'));
	printf("%s\n", strchr(s, 'H'));
	printf("%s\n", ft_strchr(s, 'G'));
	printf("%s\n", strchr(s, 'G'));
	printf("%s\n", ft_strchr(s, 'q'));
	printf("%s\n", strchr(s, 'q'));
	printf("%s\n", ft_strchr(s, '\0'));
	printf("%s\n", strchr(s, '\0'));
	printf("%s\n", ft_strchr(s, 'b'));
	printf("%s\n", strchr(s, 'b'));

	return (0);
}*/
