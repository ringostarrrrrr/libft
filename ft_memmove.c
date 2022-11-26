/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naokifuse <naokifuse@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:40:37 by naoki             #+#    #+#             */
/*   Updated: 2022/11/26 12:49:48 by naokifuse        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst <= src)
		ft_memcpy(dst, src, n);
	else
	{
		while (n--)
			*(unsigned char *)(dst + n) = *(unsigned char *)(src + n);
	}
	return (dst);
}
