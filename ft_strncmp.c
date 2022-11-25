/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuse <nfuse@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:22:37 by nfuse             #+#    #+#             */
/*   Updated: 2022/11/25 14:39:15 by nfuse            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(s1 + i) != *(s2 + i) || !*(s1 + i) || !*(s2 + i))
			return ((int)((unsigned char)(*(s1 + i)) - (unsigned char)(*(s2 + i))));
		i++;
	}
	return (0);
}
