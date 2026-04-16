/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:09:10 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:37:03 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i == dstsize)
		dst[i - 1] = '\0';
	else
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int main ()
{
	char src [10] = "Hello War";
	char dst1 [10] = {0};
	char dst2 [10] = {0};


	printf("%zu\n", ft_strlcpy(dst1, src, 0));
	printf("%zu\n", strlcpy(dst2, src, 0));
	printf ("%s\n", dst1);
	printf ("%s\n", dst2);

}*/
