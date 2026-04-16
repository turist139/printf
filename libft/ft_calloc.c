/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 22:50:56 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:34:26 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total;
	void			*dst;
	size_t			i;
	unsigned char	*ptr;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	total = count * size;
	dst = malloc(total);
	if (!dst)
		return (NULL);
	ptr = (unsigned char *)dst;
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	int	*p = ft_calloc(SIZE_MAX, SIZE_MAX);

	p[0] = 4;
	p[4] = 456;

	printf("%d\n", p[0]);
	printf("%d\n", p[4]);

	free(p);

	return (0);
}*/
