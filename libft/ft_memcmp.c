/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:08:04 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:56:13 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((int)(str1[i] - str2[i]));
		i++;
	}
	return (0);
}
/*
int main ()
{
	unsigned char t1 [10] = "Abrac";
	unsigned char t2 [10] = "Abra";

	printf("%d - ft\n", ft_memcmp(t1, t2, 5));
	printf("%d - orig\n", memcmp(t1, t2, 5));

	return (0);
}*/
