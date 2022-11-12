/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:37:54 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/12 17:37:55 by vvagapov         ###   ########.fr       */
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
	while (str[i] && (i < n))
	{
		if (str[i] == uc)
			return (str + i);
		i++;
	}
	return (NULL);
}
/* 
void	test(const void *s, int c, size_t n)
{
	printf("Searching for '%c' or '%u' in %lu bytes of '%s': '%s' -> '%s'\n",
			c, c, n, s, memchr(s, c, n ), ft_memchr(s, c, n));
}

int	main(void)
{
	test("hello there polly", 'h', 0);
	test("hello there polly", 'h', 1);
	test("hello there polly", 'l', 1);
	test("hello there polly", 'l', 2);
	test("hello there polly", 'l', 3);
	test("hello there polly", 'l', 22);
	return (0);
}
 */