/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivas-q <arivas-q@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 08:15:41 by arivas-q          #+#    #+#             */
/*   Updated: 2025/01/27 09:31:09 by arivas-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	
	while (*lst != NULL)
	{
		current = (*lst)->next;
		(*del)((*list)->content);
		free(*lst);
		*lst = current;
	}
	*lst = NULL;
}