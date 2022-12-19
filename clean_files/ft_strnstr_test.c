/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 23:39:22 by vvagapov          #+#    #+#             */
/*   Updated: 2022/12/19 21:41:09 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	test(const char *haystack, const char *needle, size_t len)
{
    printf("Searching for '%s' in %lu chars of '%s' -> '%s': '%s'\n",
    needle, len, haystack, strnstr(haystack, needle, len), ft_strnstr(haystack,
		needle, len));
}

int	main(void)
{
    test("123456789059826905", "905", 30);
    test("123456789059826905", "", 30);
    test("123456789059826905", "905", 0);
    test("123456789059826905", "9", 30);
    test("123456789059826905", "9826", 11);
    test("123456789059826905", "9826", 12);
    test("123456789059826905", "9826", 13);
    test("123456789059826905", "9826", 14);
    test("123456789059826905", "9826", 15);
    test("123456789059826905", "6905", 30);
	test("", "", 30);
	test("", "", 0);
	test("56", "", 0);
	test("", "4", 0);
    test("", "6905", 30);
    return (0);
}
