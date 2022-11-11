/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:36:02 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/11 15:50:10 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int count_words(char const *s, char c)
{
    unsigned int res;
    unsigned int i;
    char word_found;

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

unsigned int get_word_len(char *s, char c)
{
    int res;

    res = 0;
    while (s[res] && s[res] != c)
        res++;
    return res;
}

char **ft_split(char const *s, char c)
{
    char    *str;
    char    **res;
    unsigned int    word_count;
    unsigned int    i;
    unsigned int    word_len;

    word_count = count_words(s, c);
    res = (char **)malloc(sizeof(char *) * word_count + 1);
    str = s;
    i = 0;
    while (i < word_count)
    {
        while (*str && *str == c) // Skip "spaces"
            str++;
        word_len = get_word_len(str, c);
        res[i] = (char *)malloc(sizeof(char) * word_len);
        word_count--;
    }
}