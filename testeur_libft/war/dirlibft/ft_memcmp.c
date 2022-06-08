/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:35:50 by acloos            #+#    #+#             */
/*   Updated: 2022/05/31 17:10:24 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}
/*
int	main(void)
{
	printf("%i\n", memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%i", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	return (0);
}


int	main(void)
{
	const void *s1 = "0, 0, 127, 0";
	const void *s2 = "0, 0, 42, 0";

	printf("%i\n", memcmp(s1, s2, 7));
	printf("%i\n", ft_memcmp(s1, s2, 7));
	return (0);
}
*/