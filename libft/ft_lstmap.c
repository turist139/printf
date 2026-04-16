/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gganzha <gganzha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 23:07:36 by gganzha           #+#    #+#             */
/*   Updated: 2025/12/22 23:35:39 by gganzha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
// ---------------------------------------------------------
// 1. Function 'f': Creates a NEW string with 'z' modification
// ---------------------------------------------------------
void	*z_transform(void *content)
{
	char	*original;
	char	*new_str;
	int		i;
	int		len;

	original = (char *)content;
	len = ft_strlen(original);
	// 1. Allocate memory for the new string
	new_str = malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	// 2. Copy and Modify
	i = 0;
	while (original[i])
	{
		// If index is odd (1, 3, 5...), make it 'z'
		// Otherwise, keep the original character
		if (i % 2 != 0)
			new_str[i] = 'z';
		else
			new_str[i] = original[i];
		i++;
	}
	new_str[i] = '\0'; // Null-terminate
	return ((void *)new_str);
}

// ---------------------------------------------------------
// 2. Function 'del': Standard string freer
// ---------------------------------------------------------
void	delete_content(void *content)
{
	free(content);
}

// ---------------------------------------------------------
// Main Test
// ---------------------------------------------------------
int	main(void)
{
	// Setup: Create a list "Hello" -> "World" -> "42Prague"
	// Note: We use ft_strdup here so we can free it later without errors
	t_list *head = ft_lstnew(ft_strdup("Hello"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("World")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("42Prague")));

	// TEST: Map the list
	t_list *new_list = ft_lstmap(head, z_transform, delete_content);

	// Verify Results
	printf("--- Old List ---\n");
	t_list *curr = head;
	while (curr)
	{
		printf("[%s] -> ", (char *)curr->content);
		curr = curr->next;
	}
	printf("NULL\n");

	printf("\n--- New List (Z-Transformed) ---\n");
	curr = new_list;
	while (curr)
	{
		printf("[%s] -> ", (char *)curr->content);
		curr = curr->next;
	}
	printf("NULL\n");

	// Clean Up
	ft_lstclear(&head, delete_content);
	ft_lstclear(&new_list, delete_content);

	return (0);
}*/
