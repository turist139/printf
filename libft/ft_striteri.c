/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:08:56 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:36:53 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	my_func(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = 'z';
}

int	main(void)
{
	char	str[] = "hello world";

	ft_striteri(str, my_func);
	printf("%s\n", str);
	return (0);
}*/
