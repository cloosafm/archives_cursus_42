/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:36:34 by acloos            #+#    #+#             */
/*   Updated: 2022/05/26 17:18:36 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*copie;
	int		i;

	i = 0;
	copie = malloc(ft_strlen(s) + 1);
	if (copie == NULL)
		return (NULL);
	while (s[i])
	{
		copie[i] = s[i];
		i++;
	}
	copie[i] = '\0';
	return (copie);
}

/*
int	main()
{
	char	str1[] = "hello there";
	char	*target = ft_strdup(str1);
//	char	*target = strdup(str1);

	printf("%s\n", target);
	free(ft_strdup(str1));
	return (0);
}
*/