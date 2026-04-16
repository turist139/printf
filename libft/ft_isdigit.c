/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:05:17 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:39:42 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int main ()
{
	char test = '5';

	printf("%c is %d - in ft\n", test, ft_isdigit(test));
	printf("%c is %d - in normal\n", test, isdigit(test));

	return (0);
}*/
