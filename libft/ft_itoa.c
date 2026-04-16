/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:06:32 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:35:06 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = ft_len(nb);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (str);
}
/*
int	main(void)
{
	int		n1 = 0;
	int		n2 = -1234;
	int		n3 = 2147483647;
	int		n4 = -2147483648;
	char	*res;

	res = ft_itoa(n1);
	printf("%s\n", res);
	free(res);

	res = ft_itoa(n2);
	printf("%s\n", res);
	free(res);

	res = ft_itoa(n3);
	printf("%s\n", res);
	free(res);

	res = ft_itoa(n4);
	printf("%s\n", res);
	free(res);

	return (0);
}*/
