/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:37:54 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/21 19:50:40 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*str;
	size_t			i;

	i = 0;
	uc = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == uc)
			return (str + i);
		i++;
	}
	return (NULL);
}