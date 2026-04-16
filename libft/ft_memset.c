/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:08:19 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:36:18 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int main ()
{
	char test1[6] = {};
	char test2[6] = {};

	ft_memset (test1, 56, 4);
	memset (test2, 56, 4);

	printf("ft: %s\n og: %s\n", test1, test2);

	return (0);
}*/
