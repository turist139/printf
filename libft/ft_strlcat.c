/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:09:05 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/23 00:00:21 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	j = dst_len;
	i = 0;
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}
/*
int main ()
{
	char src [10] = "Hell";
	char dst1 [10] = "000 ";
	char dst2 [10] = "000 ";

	printf("%zu - usual\n", strlcat(dst1, src, 10));
	printf("%zu - ft\n", ft_strlcat(dst2, src, 10));
	printf("%s\n", dst1);
	printf ("%s\n", dst2);
} */
