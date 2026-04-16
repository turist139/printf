/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:07:42 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:35:42 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int	main(void)
{
	char	*data = "42 World";
	t_list	*node;

	node = ft_lstnew(data);

	printf("Content: %s\n", (char *)node->content);
	if (node->next == NULL)
		printf("Next is NULL (Correct)\n");

	free(node);
	return (0);
}  */
