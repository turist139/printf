/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:07:26 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:35:30 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	print_content(void *content)
{
	printf("%s -> ", (char *)content);
}

// Helper function to modify content (first char to 'X')
void	modify_content(void *content)
{
	char	*str;

	str = (char *)content;
	if (str)
		str[0] = 'X';
}

int	main(void)
{
	char s1[] = "one";
	char s2[] = "two";
	char s3[] = "three";

	t_list *node1 = ft_lstnew(s1);
	t_list *node2 = ft_lstnew(s2);
	t_list *node3 = ft_lstnew(s3);

	node1->next = node2;
	node2->next = node3;

	printf("Original: ");
	ft_lstiter(node1, print_content);
	printf("NULL\n");

	// Apply modification
	ft_lstiter(node1, modify_content);

	printf("Modified: ");
	ft_lstiter(node1, print_content);
	printf("NULL\n");

	return (0);
}*/
