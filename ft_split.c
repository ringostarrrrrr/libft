/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naokifuse <naokifuse@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:01:52 by naokifuse         #+#    #+#             */
/*   Updated: 2022/11/27 22:46:13 by naokifuse        ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	size_t	cntsplit;
	char	**ptr;
	size_t	i;
	size_t	cnt_len;
	char	*tmp;

	if (!s)
		return (NULL);
	cntsplit = my_countsplit(s, c);
	ptr = (char **)malloc((cntsplit + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	cnt_len = 0;
	while (*s)
	{
		if (*s != c)
		{
			tmp = (char *)s;
			while (*s && *s != c) 
			{
				cnt_len++;
				s++;
			}
			ptr[i++] = ft_substr(tmp, 0, cnt_len);
			cnt_len = 0;
		}
		s++;
	}
	ptr[i] = NULL;
	return (ptr);
}
