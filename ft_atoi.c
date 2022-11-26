/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naokifuse <naokifuse@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:26:57 by naokifuse         #+#    #+#             */
/*   Updated: 2022/11/26 10:32:42 by naokifuse        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *s)
{
	int	isminus;
	int	result;

	isminus = 1;
	while (*s == ' ' || *s == '\t' || *s == '\v'
		|| *s == '\f' || *s == '\r' || *s == '\n')
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
		result *= 10;
		result += (*s - 48);
		s++;
	}
	result *= isminus;
	return (result);
}
