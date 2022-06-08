/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:35:26 by acloos            #+#    #+#             */
/*   Updated: 2022/05/11 11:55:59 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalnum(int c)
{
	if (c < '0' || c > 'z')
		return (0);
	else if ((c > '9' && c < 'A') || (c > 'Z' && c < 'a'))
		return (0);
	else
		return (1);
}

/*
int	main()
{

	int	test = 1;
	printf("%d\n", ft_isalnum(test));
	printf("%d", isalnum(test));
	return (0);
}

*/