/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:35:43 by acloos            #+#    #+#             */
/*   Updated: 2022/05/12 12:29:09 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*castsrc;
	char	*castdest;
	size_t	i;

	i = 0;
	castsrc = (char *) src;
	castdest = (char *) dest;
	while (castsrc[i] && i < n)
	{
		while (castsrc[i] != c)
		{
			castdest[i] = castsrc[i];
			i++;
		}
		return (castdest);
	}
	return (NULL);
}
