/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:15:21 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/20 23:21:40 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	test(const char *s1, const char *s2, size_t n)
{
	printf("'%s' and '%s', %lu chars: %d -> %d\n",
			s1, s2, n, strncmp(s1, s2, n), ft_strncmp(s1, s2, n));
}

int	main(void)
{
	char	s1[2], s2[2];

	test("Hello", "", 0);
	test("", "", 0);
	test("", "", 5);
	test("a", "a", 1);
	test("a", "b", 1);
	test("123456", "123056", 2);
	test("123456", "123056", 3);
	test("123456", "123056", 4);
	s1[0] = '\200';
	s1[1] = '\0';
	s2[0] = '\1';
	s2[1] = '\0';
	test(s1, s2, 1);
	s2[0] = '\200';
	s2[1] = '\0';
	s2[0] = '\0';
	s2[1] = '\0';
	test(s1, s2, 1);
	
	test("salut", "salut", 5);
	test("test", "testss", 7);
	test("testss", "test", 7);
	test("test", "tEst", 4);
	test("", "test", 4);
	test("test", "", 4);
	test("abcdefghij", "abcdefgxyz", 3);
	test("abcdefgh", "abcdwxyz", 4);
	test("zyxbcdefgh", "abcdwxyz", 0);
	test("abcdefgh", "", 0);
	test("test\200", "test\0", 6);
	return(0);
}