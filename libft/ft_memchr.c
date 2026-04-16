/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:07:58 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:53:53 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	f;
	unsigned char	*str;

	i = 0;
	f = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
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
	char s [30] = "ASDFGHJKLqwerty79464qwertyGGG";
	printf("%s\n", (unsigned char *)ft_memchr(s, 'H', 30));
	printf("%s\n", (unsigned char *)memchr(s, 'H', 30));
	printf("%s\n", (unsigned char *)ft_memchr(s, 'G', 30));
	printf("%s\n", (unsigned char *)memchr(s, 'G', 30));
	printf("%s\n", (unsigned char *)ft_memchr(s, 'q', 30));
	printf("%s\n", (unsigned char *)memchr(s, 'q', 30));
	printf("%s\n", (unsigned char *)ft_memchr(s, '\0', 30));
	printf("%s\n", (unsigned char *)memchr(s, '\0', 30));
	printf("%s\n", (unsigned char *)ft_memchr(s, 'b', 30));
	printf("%s\n", (unsigned char *)memchr(s, 'b', 30));

	return (0);
}*/
