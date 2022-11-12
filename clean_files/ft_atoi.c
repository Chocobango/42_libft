/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:10:08 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/12 19:10:46 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdlib.h>
#include "libft.h"
#include <limits.h>
#include <stdio.h>*/
/* 
long	ft_strtol(const char *str)
{
}
 */
// TODO: use strtol !

static char	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == '\v'
		|| c == '\f');
}

int	ft_atoi(const char *str)
{
	char		sign;
	char		*s;
	long long	res;
	long long	res_prev;

	sign = 1;
	s = (char *)str;
	res = 0;
	while (is_whitespace(*s))
		s++;
	if (*(s++) == '-')
		sign = -1;
	else if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		res_prev = res;
		res = res * 10 + (*(s++) - '0');
		if ((res_prev ^ res) < 0)
			if (sign > 0)
				return (-1);
		else
			return (0);
	}
	return ((int)res * sign);
}

/* 
void	test(const char *str)
{
	printf("%s -> %d : %d\n", str, atoi(str), ft_atoi(str));
}

int	main(void)
{
	test("86 3");
	test("-3575h3");
	test(" -3");
	test(" +3");
	test("+-3");
	test("  -3");
	test("  - 3");
	test("           3");
	test("0003");
	test("+2147483647");
	test("+2147483648");
	test("-2147483648");
	test("-2147483649");
	test("0000");
	test("0.5");
	test("-0");
	test("++5");
	test("-3-5f575h");
	test("");
	return (0);
} */
