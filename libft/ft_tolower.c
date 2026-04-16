/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:10:23 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:58:24 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int main ()
{
	unsigned char	t1;
	unsigned char	t2;
	unsigned char	t3;
	unsigned char	t4;

	t1 = 'a';
	t2 = 'A';
	t3 = 'z';
	t4 = '7';
	printf("%c - %c\n", ft_tolower(t1), tolower(t1));
	printf("%c - %c\n", ft_tolower(t2), tolower(t2));
	printf("%c - %c\n", ft_tolower(t3), tolower(t3));
	printf("%c - %c\n", ft_tolower(t4), tolower(t4));
}
*/
