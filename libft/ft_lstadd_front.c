/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/10/10 18:34:52 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	else if (!*lst)
		*lst = new;
	else
	{
		new -> next = *lst;
		*lst = new;
	}
}

// #include <stdio.h>

// int main (void)
// {
// 	char 	*content_node = "abcd";
// 	char 	*content_new_node = "efgh";
// 	t_list	*new_node;
// 	t_list	*list_node;
// 	t_list	**lst;
// 	char	*str;

// 	lst = &list_node;
// 	new_node = ft_lstnew(content_new_node);
// 	list_node = ft_lstnew(content_node);
// 	ft_lstadd_front(lst, new_node);
// 	printf("content of node is %s", lst);
// 	return (0);
// }
