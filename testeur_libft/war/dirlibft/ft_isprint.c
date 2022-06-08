/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:35:40 by acloos            #+#    #+#             */
/*   Updated: 2022/05/27 14:36:15 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c == 127)
		return (0);
	else
		return (1);
}
/*
int	main()
{

	int	test = 47;
	printf("%d\n", ft_isprint(test));
	printf("%d", isprint(test));
	return (0);
}
*/
