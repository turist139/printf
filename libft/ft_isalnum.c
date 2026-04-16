/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:03:38 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:40:00 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
/*
int main ()
{
	char test = '!';

	printf("%d - ft\n", ft_isalnum(test));
	printf("%d - normal\n", isalnum(test));

	return (0);
}*/
