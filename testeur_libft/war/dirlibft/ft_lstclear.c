/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:55:44 by acloos            #+#    #+#             */
/*   Updated: 2022/05/31 17:39:23 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*elem;

	elem = *lst;
	if (*lst == NULL)
		return;
	while (*lst != NULL)
	{
		elem = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = elem;
	}
	(*lst) = NULL;
}
