/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:06:25 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:39:48 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c < 127))
		return (1);
	return (0);
}
/*
int main ()
{
	char test = 's';

	printf("%d - ft\n", ft_isprint(test));
	printf("%d - normal\n", isprint(test));

	return (0);
}*/
