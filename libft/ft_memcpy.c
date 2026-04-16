/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:08:08 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:36:10 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int main ()
{
	char src[] = "Hello";
	char dst1[6];
	char dst2[6];

	memcpy(dst1, src, 6);
	ft_memcpy(dst2, src, 6);

	printf("%s\n", dst1);
	printf("%s\n", dst2);

	return (0);
}*/
