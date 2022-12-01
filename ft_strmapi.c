/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naokifuse <naokifuse@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:38:20 by naokifuse         #+#    #+#             */
/*   Updated: 2022/12/01 15:59:42 by naokifuse        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	s_len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	ptr = malloc((s_len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
