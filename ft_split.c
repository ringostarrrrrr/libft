/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naoki <naoki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:01:52 by naokifuse         #+#    #+#             */
/*   Updated: 2022/11/30 22:15:49 by naoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	my_countsplit(char const *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c && *(s + 1) == c)
			cnt++;
		else if (*s != c && *(s + 1) == '\0')
			cnt++;
		s++;
	}
	return (cnt);
}

char	**my_free(char **ptr, size_t i)
{
	size_t	j;

	j = 0;
	if (ptr[i] == NULL)
	{
		while (j < i)
		{
			free(ptr[j]);
			j++;
		}
		return (NULL);
	}
	return (ptr);
}

char	**my_split(char **ptr, char const *s, char c, size_t cntsplit)
{
	size_t	i;
	size_t	cnt_len;
	char	*tmp;

	i = 0;
	cnt_len = 0;
	while (i < cntsplit)
	{
		if (*s != c)
		{
			tmp = (char *)s;
			while (*s && *s != c)
			{
				cnt_len++;
				s++;
			}
			ptr[i] = ft_substr(tmp, 0, cnt_len);
			my_free(ptr, i);
			i++;
			cnt_len = 0;
		}
		s++;
	}
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	cntsplit;
	char	**ptr;

	if (!s)
		return (NULL);
	cntsplit = my_countsplit(s, c);
	ptr = (char **)malloc((cntsplit + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	ptr = my_split(ptr, s, c, cntsplit);
	return (ptr);
}
