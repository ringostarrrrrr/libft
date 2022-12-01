/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naokifuse <naokifuse@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 23:07:53 by naokifuse         #+#    #+#             */
/*   Updated: 2022/12/01 10:12:20 by naokifuse        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	my_countdigit(int n)
{
	size_t	cntdigit;
	long	ln;
	size_t	digit;

	cntdigit = 0;
	ln = (long)n;
	if (ln == 0)
		digit = 1;
	if (ln < 0)
		ln *= -1;
	while (ln >= 1)
	{
		ln = ln / 10;
		cntdigit++;
	}
	if (n > 0)
		digit = cntdigit;
	else if (n < 0)
		digit = cntdigit + 1;
	return (digit);
}

int	my_power(int n, int pow)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < pow)
	{
		result *= n;
		i++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	cntdigit;
	size_t	i;
	long	ln;

	cntdigit = my_countdigit(n);
	ptr = malloc((cntdigit + 1) * sizeof(char));
	i = 0;
	ln = (long)n;
	if (ln < 0)
	{
		ptr[i++] = '-';
		ln *= -1;
	}
	while (i < cntdigit)
	{
		ptr[i] = '0' + (ln / my_power(10, cntdigit -1 - i));
		ln = ln % my_power(10, cntdigit - 1 - i);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
