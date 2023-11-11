/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emehdaou <emehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:05:48 by emehdaou          #+#    #+#             */
/*   Updated: 2023/11/11 03:40:34 by emehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// void	print_list(t_list *first_node)
// {
// 	t_list	*current;

// 	current = first_node;
// 	while (current != NULL)
// 	{
// 		printf("%s\n", current->content);
// 		current = current->next;
// 	}
// }

// int	main(void)
// {
// 	t_list *first;
//     t_list *second;

// 	first = ft_lstnew("test");
// 	second = ft_lstnew("test2");

//     ft_lstadd_back(&first, second);
// 	print_list(first);
// }