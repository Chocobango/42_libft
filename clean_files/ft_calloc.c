/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:09:36 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/25 22:20:55 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "libft.h"

// TODO: check for overflows

void	*ft_calloc(size_t count, size_t size)
{
	char	*res;
	size_t	num_of_bytes;

	num_of_bytes = size * count;
	res = malloc(num_of_bytes);
	if (!res)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_bzero(res, num_of_bytes);
	return ((void *)res);
}

/* 
int	main(void)
{
    int *s = ft_calloc(10, sizeof(int));
    for (int i=0; i < 50; i++)
        printf("%d", s[i]);
    printf("\n%p\n", s);
} */