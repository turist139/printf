/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:07:08 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:35:20 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/*
void	del_content(void *content)
{
	printf("Deleting: %s\n", (char *)content);
}

int	main(void)
{
	t_list	*head = ft_lstnew("Node 1");
	head->next = ft_lstnew("Node 2");
	head->next->next = ft_lstnew("Node 3");

	ft_lstclear(&head, del_content);

	if (head == NULL)
		printf("Head is now NULL. List cleared.\n");

	return (0);
}*/
