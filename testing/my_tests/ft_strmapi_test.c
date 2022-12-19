/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:06:45 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/12 22:28:06 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char f(unsigned int i, char c)
{
	return (c + i % 10);
}

void test(char const *s, char (*f)(unsigned int, char))
{
	printf("'%s' -> '%s'\n", s, ft_strmapi(s, f));
}

int main(void)
{
	test("1111111", f);
	test("", f);
	test("0", f);
	return (0);
}