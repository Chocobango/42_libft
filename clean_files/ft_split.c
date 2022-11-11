/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:36:02 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/11 17:45:15 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int  count_words(char const *s, char c)
{
    int     res;
    int     i;
    char    word_found;

    i = 0;
    res = 0;
    while (s[i])
    {
        word_found = 0;
        while (s[i] && s[i] == c)
            i++; 
        while (s[i] && s[i] != c){
            word_found = 1;
            i++;
        }
        if (word_found)
            res++;
    }
    return (res);
}

static int  get_word_len(const char *s, char c)
{
    int res;

    res = 0;
    while (s[res] && s[res] != c)
        res++;
    return (res);
}

static void *handle_malloc_fail(char **res, int i)
{
    while (--i >= 0)
        free(res[i]);
    free(res);
    return (NULL);
}

static void copy_word(char  **res, const char *str, int i, int word_len)
{
    res[i][word_len] = '\0';
    while (--word_len >= 0)
    {
        printf("copying %dth character of the word which is %c\n",
            word_len, str[word_len]);
        res[i][word_len] = str[word_len];
    }
            
}

char **ft_split(char const *s, char c)
{
    char    **res;
    int     word_count;
    int     i;
    int     word_len;

    word_count = count_words(s, c);
    res = (char **)malloc(sizeof(char *) * (word_count + 1));
    printf("allocated space for %d string pointers\n", word_count + 1);
    if (!res) return NULL;
    i = 0;
    while (i < word_count)
    {
        while (*s && *s == c)
            s++;
        printf("skipped spaces: '%s'\n", s);
        word_len = get_word_len(s, c);
        printf("%dth word length is %d\n", i, word_len);
        res[i] = (char *)malloc(sizeof(char) * (word_len + 1));
        if (!res[i])
            return (handle_malloc_fail(res, i));
        copy_word(res, s, i, word_len);
        s += word_len;
        printf("string after reading the word: '%s'\n", s);
        i++;
    }
    res[word_count] = NULL;
    return (res);
}
