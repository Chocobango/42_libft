/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:41:33 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/05 17:26:26 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    size_t  len;
    char    *s2;

    if (!s1) return NULL;
    len = 0;
    while (s1[len])
        len++;
    s2 = malloc(sizeof(char) * len + 1);
    if (!s2)
    {
        errno = ENOMEM;
        return NULL;
    }
    s2[len] = '\0';
    while (len)
    {
        len--;
        s2[len] = s1[len];
    }
    return s2;
}
/* 
void test(const char *s)
{
    char *copy = strdup(s);
    char *ft_copy = ft_strdup(s);
    printf("Copying '%s': '%s' -> '%s'\n", s, copy, ft_copy);
    free(copy);
    free(ft_copy);
}

int main(void)
{
    test("hellllo");
    test("");
    test("");
    return (0);
}
 */