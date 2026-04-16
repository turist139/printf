/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:10:07 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:49:32 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	f;
	char	*str;

	i = ft_strlen(s);
	f = (char)c;
	str = (char *)s;
	while (1)
	{
		if (str[i] == f)
			return (str + i);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
/*
int main ()
{
	char s [40] = "ASDFGHJKLqwerty79464qwertyGGG";
	printf("%s\n", ft_strrchr(s, 'H'));
	printf("%s\n", strrchr(s, 'H'));
	printf("%s\n", ft_strrchr(s, 'G'));
	printf("%s\n", strrchr(s, 'G'));
	printf("%s\n", ft_strrchr(s, 'q'));
	printf("%s\n", strrchr(s, 'q'));
	printf("%s\n", ft_strrchr(s, '\0'));
	printf("%s\n", strrchr(s, '\0'));
	printf("%s\n", ft_strrchr(s, 'b'));
	printf("%s\n", strrchr(s, 'b'));

	return (0);
}*/
