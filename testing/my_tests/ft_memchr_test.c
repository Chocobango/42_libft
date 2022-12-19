/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:37:33 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/21 19:44:08 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test(const void *s, int c, size_t n)
{
	printf("Searching for '%c' or '%u' in %lu bytes of '%s': '%s' -> '%s'\n",
			c, c, n, s, memchr(s, c, n ), ft_memchr(s, c, n));
}

int	main(void)
{
	/* test("hello there polly", 'h', 0);
	test("hello there polly", 'h', 1);
	test("hello there polly", 'l', 1);
	test("hello there polly", 'l', 2);
	test("hello there polly", 'l', 3);
	test("hello there polly", 'l', 22); */
	test("/|\x12\xff\x09\0\x42\042\0\42|\\", '\0', 12);
	return (0);
}