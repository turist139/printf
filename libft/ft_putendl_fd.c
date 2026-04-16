/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:08:27 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:36:28 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	*str = "Hello EVERYoneeeeee";

	ft_putendl_fd(str, 1);

	return (0);
}*/
