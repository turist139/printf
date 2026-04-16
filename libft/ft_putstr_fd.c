/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:08:37 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:36:34 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}
/*
int	main(void)
{
	char	*str = "ABRA cadabra\n";

	// Test 1: Write to Standard Output (1)
	ft_putstr_fd(str, 1);


	return (0);
}*/
