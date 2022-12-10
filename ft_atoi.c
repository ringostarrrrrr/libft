/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naokifuse <naokifuse@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:26:57 by naokifuse         #+#    #+#             */
/*   Updated: 2022/12/10 18:25:13 by naokifuse        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	overflow(int isminus)
{
	if (isminus == 1)
		return ((int)LONG_MAX);
	else
		return ((int)LONG_MIN);
}

int	ft_atoi(const char *s)
{
	int		isminus;
	long	result;

	isminus = 1;
	while ((9 <= *s && *s <= 13) || *s == 32)
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			isminus *= -1;
		s++;
	}
	result = 0;
	while ('0' <= *s && *s <= '9')
	{
		if (result > LONG_MAX / 10)
			return (overflow(isminus));
		if (result == LONG_MAX / 10 && LONG_MAX % 10 < *s - '0')
			return (overflow(isminus));
		result *= 10;
		result += (*s - '0');
		s++;
	}
	result *= isminus;
	return (result);
}
