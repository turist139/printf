/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:08:23 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:36:23 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	// Test 1: Standard Output (Terminal)
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);

	// Test 2: Standard Error (Terminal, usually red in some shells)
	ft_putchar_fd('E', 2);
	ft_putchar_fd('\n', 2);

	// Test 3: Write to a file
	int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putchar_fd('Z', fd);
		close(fd);
	}
	return (0);
}*/
