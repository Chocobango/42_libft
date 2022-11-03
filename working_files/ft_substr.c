/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:18:20 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/03 23:29:02 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters:
            s: The string from which to create the substring.
            start: The start index of the substring in the
                string ’s’.
            len: The maximum length of the substring.
Return value:
            The substring.
            NULL if the allocation fails.
External functs.:
            malloc
Description:
            Allocates (with malloc(3)) and returns a substring
            from the string ’s’.
            The substring begins at index ’start’ and is of
            maximum size ’len’.
*/

#include <stdlib.h>
#include <stdio.h>

static size_t ft_strlen(const char *s)
{
	size_t res;
	
	res = 0;
	while (s[res])
		res++;
	return res;
}

static size_t min(size_t a, size_t b)
{
    if (a < b) return (a);
    else return (b);
}

// What shall we do if s is NULL?
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  s_len;
    size_t  res_len;
    char    *res;
    
    s_len = ft_strlen(s);
//    printf("s length is %lu\n", s_len);
    if (s_len < start)
        res_len = 0;
    else
        res_len = min(len, s_len - start);
//    printf("res length is %lu\n", res_len);
    if (res_len < 0) res_len = 0;
    res = malloc(sizeof(char) * res_len + 1);
    if (!res) return NULL;
    res[res_len] = '\0';
    while (res_len)
    {
        res_len--;
        res[res_len] = s[start + res_len];
    }
    return res;
}

void test(char const *s, unsigned int start, size_t len)
{
    printf("\t'%s' from %u for %lu: '%s'\n",
        s, start, len, ft_substr(s, start, len));
}

int main(void)
{
    test("hello", 3, 10);
    test("hello", 3, 0);
    test("", 0, 0);
    test("", 3, 15);
    test("a", 3, 15);
    test("", 0, 15);
    test("", 15, 0);
    test("hellllllllo", 5, 5);
    test("hellllllllo", 5, 6);
    test("hellllllllo", 5, 7);
    test("hellllllllo", 5, 8);
    test("hellllllllo", 20, 7);
    test("hellllllllo", 2, 0);
    test("hellllllllo", 0, 1);
    return (0);
}