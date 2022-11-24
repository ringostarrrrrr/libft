/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naokifuse <naokifuse@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:32:37 by naoki             #+#    #+#             */
/*   Updated: 2022/11/24 14:40:07 by naokifuse        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	if (dstsize <= dst_len + src_len)
	{
		ft_strlcpy(dst + dst_len, src, dstsize - dst_len);
		return (dst_len + src_len);
	}
	else
	{
		ft_strlcpy(dst + dst_len, src, dstsize - dst_len);
		return (dst_len + src_len);
	}
}
