/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:09:36 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/03 21:39:18 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void    *ft_calloc(size_t count, size_t size)
{
    unsigned char   *res;
    size_t          i;

    res = malloc(size * count);
    i = 0;
    while(i < count * size)
    {
        res[i] = 0;
        i++;
    }
    return (void *)res;
}


int main(void)
{
    int *s = ft_calloc(3, sizeof(int));
    for (int i=0; i < 30; i++)
        printf("%d", s[i]);
    printf("\n");
}