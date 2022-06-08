/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:37:06 by acloos            #+#    #+#             */
/*   Updated: 2022/05/31 12:01:28 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*checker(char const *s, unsigned int start, size_t len)
{
	char	*copie;

	if (start > ft_strlen(s))
	{
		copie = malloc(sizeof(char));
		*copie = '\0';
	}
	else if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
		copie = malloc(sizeof((char)len) + 1);
	}
	else
		copie = malloc(sizeof((char)len) + 1);
	if (!copie)
		return (NULL);
	return (copie);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*copie;
	unsigned int	i;

	i = 0;
	copie = checker(s, start, len);
	if (copie == NULL)
		return (NULL);
	while (len > 0 && *copie)
	{
		copie[i] = s[start];
		i++;
		start++;
		len--;
	}
	copie[i] = '\0';
	return (copie);
}

/*
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
	const char	str[] = "hello, comment ca va";
	char	*subbb;

	printf("%s\n", str);
	subbb = ft_substr(str, 4, 8); //copie de hell[o, comme]nt ca va
	printf("et donc=%s", subbb);
	free(subbb);
}
*/
