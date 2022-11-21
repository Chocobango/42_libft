/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:55:15 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/21 20:00:14 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test(const void *s1, const void *s2, size_t n)
{
	printf("'%s' vs '%s', %lu bytes: %d -> %d\n",
			s1, s2, n, memcmp(s1, s2, n), ft_memcmp(s1, s2, n));
}

int	main(void)
{
	test("000004", "00000", 5);
   	test("000004", "00000", 6);
	test("000004", "00000", 7);
	test("00000", "00001", 5);
	test("000004", "00000", 0);
	test("", "", 3);
	test("", ".", 0);
	return (0);
}
