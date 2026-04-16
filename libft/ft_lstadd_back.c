/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:06:47 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:35:12 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("Abra");
	t_list	*node2 = ft_lstnew("Cadabra");


	ft_lstadd_back(&head, node1);

	ft_lstadd_back(&head, node2);

	printf("1: %s\n", (char *)head->content);
	printf("2: %s\n", (char *)head->next->content);

	return (0);
}*/
