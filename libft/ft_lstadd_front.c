/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:06:59 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:35:17 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1;
	t_list	*node2;


	node1 = ft_lstnew("World");

	head = node1;

	node2 = ft_lstnew("Hello");

	ft_lstadd_front(&head, node2);


	printf("1:%s\n", (char *)head->content);
	printf("2:%s\n", (char *)head->next->content);

	return (0);
}*/
