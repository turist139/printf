/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:09:46 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:59:44 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main ()
{
	char t1 [] = "isad";
	char t2 [] = "isadi";

	printf("%d - ft\n", ft_strncmp(t1, t2, 7));
	printf("%d - orig\n", strncmp(t1, t2, 7));

	return (0);
}*/
