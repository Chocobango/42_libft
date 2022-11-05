/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:26:03 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/05 18:03:07 by vvagapov         ###   ########.fr       */
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
#include "libft.h"
/* 
static size_t min(size_t a, size_t b)
{
    if (a < b) return (a);
    else return (b);
}
 */
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

static int	ft_test(const char *input, char const *set, const char *reference)
{
	char	*trimmed_str;
	int		result;

	trimmed_str = ft_strtrim(input);
	if (!trimmed_str)
	{
		printf("Memory allocation error.\n");
		exit(42);
	}
	result = strcmp(reference, trimmed_str);
    printf("trimming '%s' from '%s': '%s' -> '%s'\n",
        set, input, reference, trimmed_str);
	free(trimmed_str);
	return (result);
}

void ft_test(char const *s1, char const *set)
{
    printf("trimming '%s' from '%s': '%s' -> '%s'\n",);
}

int main(void)
{
    ft_test(" ", " h", "");
	ft_test(" \t\n\t ", "\n\t \v", "");
	ft_test("\tbest\n", "\n\t \v", "best");
	ft_test("O \t\n K", "\n\t \v", "O \t\n K");
	ft_test("continue", "\n\t \v", "continue");
	ft_test("break ;", "\n\t \v", "break ;");
	ft_test(" One Night in Tokyo\t", "\n\t \v", "One Night in Tokyo");
    return (0);
}