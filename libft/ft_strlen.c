/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:09:14 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:41:00 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i] != '\0')
	{
		cnt++;
		i++;
	}
	return (cnt);
}
/*
int main ()
{
	char test[] = "Example";

	printf("ft_strlen = %zu, original = %lu\n", ft_strlen(test), strlen(test));

	return (0);
}*/
