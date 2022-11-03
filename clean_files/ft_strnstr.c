/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:48:12 by vvagapov          #+#    #+#             */
/*   Updated: 2022/10/31 20:09:43 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (i + j < len && needle[j] && haystack[i + j] && needle[j] == haystack[i + j])
            j++;
        if (!needle[j])
            return ((char*)(haystack + i));
        i++;
    }
    return (NULL);
}

void    test(const char *haystack, const char *needle, size_t len)
{
    printf("Searching for '%s' in %lu chars of '%s' -> '%s': %s\n",
    needle, len, haystack, strnstr(haystack, needle, len), ft_strnstr(haystack, needle, len));
}

int main(void)
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
    test("", "6905", 30);
    return (0);
}