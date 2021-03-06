/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:36:40 by acloos            #+#    #+#             */
/*   Updated: 2022/05/31 16:08:58 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	nlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n >= 1 || n <= -1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*nbr_decomp(char *nbr, int n, int i)
{
	long long	nagai;

	nagai = n;
	if (nagai < 0)
	{
		nbr[0] = '-';
		nagai *= -1;
	}
	nbr[i] = '\0';
	i--;
	while (nagai != 0)
	{
		nbr[i] = (nagai % 10) + '0';
		nagai = nagai / 10;
		i--;
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	char	*nbr;

	nbr = malloc(sizeof(char *) * (nlen(n) + 1));
	if (nbr == NULL)
		return (NULL);
	if (n == 0)
	{
		nbr[0] = '0';
		nbr[1] = '\0';
	}
	else
		nbr_decomp(nbr, n, nlen(n));
	return (nbr);
}

/*
int	main()
{

	int	test = -2147483648;
	
	printf("%s\n", ft_itoa(test));
	return (0);
}*/