/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naoki <naoki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:25:05 by naoki             #+#    #+#             */
/*   Updated: 2022/12/02 17:16:31 by naoki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;

	if (n < 0)
	{
		un = (unsigned int)n * -1;
		ft_putchar_fd('-', fd);
	}
	else
		un = (unsigned int)n;
	if (un >= 10)
		ft_putnbr_fd(un / 10, fd);
	ft_putchar_fd(un % 10 + '0', fd);
}
