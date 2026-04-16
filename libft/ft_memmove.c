/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:08:15 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:36:15 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
/*
int main ()
{
	char src [13] = "abra cadabra";
	char dst1 [13] = {};
	char dst2 [13] = {};

	ft_memmove(&dst1, &src, 10);
	memmove(&dst2, &src, 10);

	printf("%s\n", dst1);
	printf("%s\n", dst2);


	return (0);
}*/
