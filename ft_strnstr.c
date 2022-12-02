/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naoki <naoki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:50:29 by naokifuse         #+#    #+#             */
/*   Updated: 2022/12/02 16:48:01 by naoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2_len;
	size_t	i;

	if (*s2 == '\0')
		return ((char *)s1);
	if (n == 0)
		return (0);
	if (*s1 == '\0')
		return (NULL);
	s2_len = ft_strlen(s2);
	i = 0;
	while (i + s2_len <= n)
	{
		if (ft_strncmp(s1 + i, s2, s2_len) == 0)
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
