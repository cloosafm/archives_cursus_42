/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:36:27 by acloos            #+#    #+#             */
/*   Updated: 2022/06/03 10:12:20 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	else
		return (c);
}

/*
int	main(void)
{
	int	test;

	test = ';';
	printf(";=59=%i\n", ft_toupper(test));
	test = 'A';
	printf("A=65=%i\n", ft_toupper(test));
	test = 'Z';
	printf("Z=90=%i\n", ft_toupper(test));
	test = 'a';
	printf("a=97=%i\n", ft_toupper(test));
	test = 'z';
	printf("z=122=%i\n", ft_toupper(test));
	test = '0';
	printf("0=48=%i\n", ft_toupper(test));
	test = '|';
	printf("|=124=%i\n", ft_toupper(test));
}
*/