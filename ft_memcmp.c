/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:31:24 by vvagapov          #+#    #+#             */
/*   Updated: 2022/10/28 18:47:28 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *uc1;
	unsigned char *uc2;

	i = 0;
	uc1 = (unsigned char *)s1;
	uc2 = (unsigned char *)s2;
	while (i < n)
	{
		if (!uc1[i] || uc1[i] != uc2[i])
			return (uc1[i] - uc2[i]);
		i++;
	}
	return (0);
}

void test(const void *s1, const void *s2, size_t n)
{
	printf("'%s' vs '%s', %lu bytes: %d -> %d\n",
			s1, s2, n, memcmp(s1, s2, n), ft_memcmp(s1, s2, n));
}

int  main(void)
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
