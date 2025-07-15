/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:11:11 by joao-alm          #+#    #+#             */
/*   Updated: 2024/10/26 19:11:11 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Clears the entire list and frees its nodes using the provided delete function.
 *
 * @param lst Address of the list head.
 * @param del Function to delete node content.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		current = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(current);
	}
}
