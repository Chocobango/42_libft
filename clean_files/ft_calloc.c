/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:09:36 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/20 23:22:28 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*res;
	size_t			i;

	res = malloc(size * count);
	if (!res)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (i < count * size)
	{
		res[i] = 0;
		i++;
	}
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