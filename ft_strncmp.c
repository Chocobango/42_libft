/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:01:43 by vvagapov          #+#    #+#             */
/*   Updated: 2022/10/28 16:27:52 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i + 1 < n && s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (unsigned char)s1[i] - (unsigned char)s2[i];
}

void test(const char *s1, const char *s2, size_t n)
{
	printf("'%s' and '%s', %lu chars: %d -> %d\n",
			s1, s2, n, strncmp(s1, s2, n), ft_strncmp(s1, s2, n));
}

int main(void)
{
	test("Hello", "", 0);
	test("", "", 0);
	test("", "", 5);
	test("a", "a", 1);
	test("a", "b", 1);
	test("123456", "123056", 2);
	test("123456", "123056", 3);
	test("123456", "123056", 4);
	char s1[2], s2[2];
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
	return(0);
}
