/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 22:34:19 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:34:19 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)0;
		i++;
	}
}
/*
int main ()
{
	char test1[6] = "lalal";
	char test2[6] = "lalal";

	ft_bzero (test1 + 1, 3);
	bzero (test2 + 1, 3);

	printf("ft: %s\nog: %s\n", test1, test2);

	return (0);
}*/
