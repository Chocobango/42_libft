/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:26:03 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/04 19:59:58 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters:
            s1: The string to be trimmed.
            set: The reference set of characters to trim.
Return value:
            The trimmed string.
            NULL if the allocation fails.
External functs.:
            malloc
Description:
            Allocates (with malloc(3)) and returns a copy of
            ’s1’ with the characters specified in ’set’ removed
            from the beginning and the end of the string.
*/

#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
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
    if (s_len < start)
        res_len = 0;
    else
        res_len = min(len, s_len - start);
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

char    setIncludesChar(char const *str, char c)
{    
    while(*str)
    {
        if (*str == c)
            return (1);
        str++;
    }
    return (0);
}

size_t  indexStart(char const *s1, char const *set)
{
    size_t  res;
    
    res = 0;
    while (s1[res] && setIncludesChar(set, s1[res]))
        res++;
    return (res);
}

size_t  indexEnd(char const *s1, char const *set)
{
    size_t  res;
    
    res = ft_strlen(s1) - 1;
    while (res && setIncludesChar(set, s1[res]))
        res--;
    return (res);
}

// What shall we do if s1 is NULL?
char *ft_strtrim(char const *s1, char const *set)
{
    size_t  start_i;
    size_t  end_i;
    size_t  res_len;
    char    *res;
    
    start_i = indexStart(s1, set);
    end_i = indexEnd(s1, set);
    if (start_i >= end_i)
        res_len = end_i - start_i;
    else
        res_len = 0;
    return ft_substr(s1, start_i, end_i - start_i);
}

void test(char const *s1, char const *set)
{

}

int main(void)
{
    
    return (0);
}