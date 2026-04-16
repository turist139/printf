/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:07:53 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:35:46 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*cur;
	int		cnt;

	if (!lst)
		return (0);
	cnt = 1;
	cur = lst;
	while (cur->next)
	{
		cnt++;
		cur = cur->next;
	}
	return (cnt);
}
/*
int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;


	node1 = ft_lstnew("World");

	head = node1;

	node2 = ft_lstnew("Hello");


	ft_lstadd_front(&head, node2);
	node3 = ft_lstnew("What");
	ft_lstadd_front(&head, node3);
	node4 = ft_lstnew("Happened");
	ft_lstadd_front(&head, node4);

	printf("1:%s\n", (char *)head->content);
	printf("2:%s\n", (char *)head->next->content);
	printf("3:%s\n", (char *)head->next->next->content);
	printf("4:%s\n", (char *)head->next->next->next->content);

	printf("size:%d\n", ft_lstsize(head));

	return (0);
}*/
