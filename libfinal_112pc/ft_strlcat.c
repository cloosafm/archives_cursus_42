/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:36:06 by acloos            #+#    #+#             */
/*   Updated: 2022/05/25 11:05:56 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	j = destlen;
	if (size <= destlen)
		return (srclen + size);
	if (size > 0 && destlen < size && src[i])
		while (src[i] && i < (size - 1 - destlen))
			dest[j++] = src[i++];
	dest[j] = '\0';
	return (destlen + srclen);
}

/*
int	main(void)
{
	char			dest[] = "This is ";
	const char			src[] = "a potentially long string";
	unsigned int	size;

	size = 8;
	printf("%lu\n", ft_strlcat(dest, src, size));
//	printf("%lu\n", strlcat(dest, src, size));
}
*/