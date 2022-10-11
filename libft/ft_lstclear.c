/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/10/10 18:34:53 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*p_lst;

	if (!lst)
		return ;
	p_lst = *lst;
	while (p_lst)
	{
		temp = p_lst -> next;
		ft_lstdelone(p_lst, del);
		p_lst = temp;
	}
	*lst = NULL;
}

// #include <stdio.h>

// int main (void)
// {
// 	char 	*content_node = ft_strdup("abcd");
// 	char 	*content_new_node_1 = ft_strdup("efgh");
// 	char 	*content_new_node_2 = ft_strdup("ijklm");
// 	t_list	*list_node;
// 	t_list	*list_new_node1;
// 	t_list	*list_new_node2;
// 	t_list	**list;

// 	list = &list_node;
// 	list_node = ft_lstnew(content_node);
// 	list_new_node1 = ft_lstnew(content_new_node_1);
// 	list_new_node2 = ft_lstnew(content_new_node_2);
// 	ft_lstadd_back(list, list_new_node1);
// 	ft_lstadd_back(list, list_new_node2);
// 	printf("content of lst before_del is %s \n", (char *)(*list) -> content);
// 	ft_lstclear(list, free);
// 	printf("content of lst after_del is %p \n", (*list));
// 	return (0);
// }
