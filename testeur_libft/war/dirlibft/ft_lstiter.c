/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:55:52 by acloos            #+#    #+#             */
/*   Updated: 2022/05/31 15:56:07 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*iterable;

	iterable = lst;
	if (lst != NULL && f != NULL)
	{
		while (iterable != NULL)
		{
			f(iterable->content);
			iterable = iterable -> next;
		}
	}
}
