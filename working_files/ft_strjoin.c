/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:08:17 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/03 23:18:25 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// What shall we do if s1 or s2 are NULL?
char    *ft_strjoin(char const *s1, char const *s2)
{
//    size_t  res_len;
    size_t  s1_len;
    size_t  s2_len;
    char    *res;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    res = malloc(sizeof(char) * (s1_len + s2_len) + 1);
    if (!res) return NULL;
    res[s1_len + s2_len] = '\0';
    while (s2_len)
    {
        s2_len--;
        res[s1_len + s2_len] = s2[s2_len];
    }
    while (s1_len)
    {
        s1_len--;
        res[s1_len] = s1[s1_len];
    }
    return res;
}

void test(char const *s1, char const *s2)
{
    printf("'%s' + '%s' = '%s'\n", s1, s2, ft_strjoin(s1, s2));
}

int main(void)
{
    test("hi th", "ere");
    test("", "there");
    test("a", "");
    test("", "");
    test("1", "2");
    return(0);
}