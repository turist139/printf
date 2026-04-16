/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:10:27 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:57:56 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
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
	printf("%c - %c\n", ft_toupper(t1), toupper(t1));
	printf("%c - %c\n", ft_toupper(t2), toupper(t2));
	printf("%c - %c\n", ft_toupper(t3), toupper(t3));
	printf("%c - %c\n", ft_toupper(t4), toupper(t4));
}
*/
