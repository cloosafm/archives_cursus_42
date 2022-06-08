/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:36:53 by acloos            #+#    #+#             */
/*   Updated: 2022/05/31 16:35:55 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	chk_item_count(char const *s, char c)
{
	size_t	i;
	size_t	sep;

	i = 0;
	sep = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != '\0')
			sep++;
		i++;
	}
	return (sep);
}

size_t	item_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

static char	*splitter(const char *s, int init, int end)
{
	char	*item;
	int		i;

	item = malloc(sizeof(char) * (end - init + 1));
	if (!item)
		return (NULL);
	i = 0;
	while (end > init)
	{
		item[i++] = s[init++];
	}
	item[i] = '\0';
	return (item);
}

char	**ft_split(char const *s, char c)
{
	char		**splitted;
	size_t		i;
	size_t		j;
	int			k;
	size_t		slen;

	i = 0;
	j = 0;
	k = -1;
	slen = ft_strlen(s);
	splitted = malloc(sizeof(char *) * (chk_item_count(s, c) + 1));
	if (!splitted || !s)
		return (0);
	while (i <= slen)
	{
		if (s[i] != c && k < 0)
			k = i;
		else if ((s[i] == c || i == slen) && k >= 0)
		{
			splitted[j++] = splitter(s, k, i);
			k = -1;
		}
		i++;
	}
	return (splitted);
}

int	main(void)
{
	char const	str[] = "hey@there@everyone";
	char separate = '@';
	char	**copie;

	copie = ft_split(str, separate);
	printf("%s", (char *)copie);
	return (0);
}

