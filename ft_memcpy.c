/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naoki <naoki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:15:53 by naoki             #+#    #+#             */
/*   Updated: 2022/11/23 21:14:18 by naoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n--)
		*(unsigned char *)(dst++) = *(unsigned char *)(src++);
	return (dst);
}
