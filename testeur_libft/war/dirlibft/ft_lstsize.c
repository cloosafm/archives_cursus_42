/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:56:05 by acloos            #+#    #+#             */
/*   Updated: 2022/05/31 15:13:42 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*elem;
	int		i;

	i = 0;
	elem = lst;
	while (elem != NULL)
	{
		elem = elem -> next;
		i++;
	}
	return (i);
}
