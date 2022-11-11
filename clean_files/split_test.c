/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:21:36 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/11 17:42:19 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void test(char const *s, char c)
{
    char **res;
    int i;
    
    printf("splitting '%s' by '%c'\n", s, c);
    res = ft_split(s, c);
    i = 0;
    while (res[i])
    {
        printf("%s\n", res[i]);
        i++;
    }
}

void split_test(void)
{
    //test("oihargh3q587ty0q3igiydoj", '3');
    //test("", 'h');
    test(" 12345 678 ", ' ');
    //test("111111", '1');
}