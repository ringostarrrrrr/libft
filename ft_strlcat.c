/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naoki <naoki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:32:37 by naoki             #+#    #+#             */
/*   Updated: 2022/11/23 12:51:57 by naoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	else if (dstsize <= dst_len + src_len)
	{
		ft_strlcpy(dst + dst_len, src, dstsize - dst_len);
		return (dst_len + src_len);
	}
	else
	{
		ft_strlcpy(dst + dst_len, src, src_len + 1);
		return (dst_len + src_len);
	}
}
