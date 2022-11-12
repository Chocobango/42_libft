/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:16:59 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/12 17:38:06 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/* 
int	main(void)
{
	char	*s;
	char	*s1;

	s = malloc(sizeof(char) * 10);
	s[9] = '\0';
	for (int i = 0; i < 9; i++)
		s[i] = i + 'a';
	s1 = malloc(sizeof(char) * 3);
	s1[2] = '\0';
	for (int i = 0; i < 2; i++)
		s1[i] = i + '0';
	printf("%s\n", s);
	printf("%s\n", s1);
	printf("%s\n", memcpy(s, s1, 2));
	printf("%s\n", s);
	printf("%s\n", memcpy(NULL, s, 1));
	return (0);
}
 */