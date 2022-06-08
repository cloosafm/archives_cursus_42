/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:36:58 by acloos            #+#    #+#             */
/*   Updated: 2022/05/31 17:31:21 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	size_t	j;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	i = 0;
	j = 0;
	joined = malloc((sizeof(char *) * lens1) + (sizeof(char *) * lens2) + 1);
	if (joined == NULL)
		return (NULL);
	while (s1 && i < lens1)
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2 && j < lens2)
	{
		joined[i] = s2[j++];
		i++;
	}
	joined[i] = '\0';
	return (joined);
}
/*
int	main(void)
{
	char	str1[] = "lorem ipsum";
	char	str2[] = "dolor sit amet";

	printf("%s", ft_strjoin(str1, str2));
	return (0);
}
*/