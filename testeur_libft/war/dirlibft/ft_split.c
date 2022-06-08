/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acloos <acloos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:36:53 by acloos            #+#    #+#             */
/*   Updated: 2022/05/31 17:12:44 by acloos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	chk_item_count(char const *s, char c)
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

char	*splitter(const char *s, int init, int end)
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
/*
int	main(void)
{
	char const	*str;
	char separate = 'i';
	char	**copie;
	int	i = 0;

	*str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	copie = ft_split(str, separate);
	while (i < 25)
	{
		printf("%s\n", copie[i]);
		i++;
	}
	return (0);
}
*/
