/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naokifuse <naokifuse@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:50:29 by naokifuse         #+#    #+#             */
/*   Updated: 2022/11/25 21:40:05 by naokifuse        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s2_len;

	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	s2_len = ft_strlen(s2);
	while (i < n)
	{
		if (*(s1 + i) == *s2)
		{
			j = 1;
			while (*(s1 + i + j) == *(s2 + j))
			{
				j++;
				if (*(s2 + j) == '\0')
					return ((char *)(s1 + i));
			}		
		}
		i++;
		if (s2_len + i > n)
			break ;
	}	
	return (NULL);
}
