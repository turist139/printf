/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:04:11 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:40:13 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}
/*
int main ()
{
	char test = 's';

	printf("%d - ft\n", ft_isalpha(test));
	printf("%d - normal\n", isalpha(test));

	return (0);
}*/
