/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:16:59 by vvagapov          #+#    #+#             */
/*   Updated: 2022/10/26 20:47:02 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *d;
	const char *s;

	i = 0;
	d = dst;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dst;
}

int main(void)
{
	char *s = malloc(sizeof(char) * 10);
	s[9] = '\0';
	for (int i = 0; i < 9; i++)
		s[i] = i + 'a';
	char *s1 = malloc(sizeof(char) * 3);
	s1[2] = '\0';
	for (int i = 0; i < 2; i++)
		s1[i] = i + '0';
	printf("%s\n", s);
	printf("%s\n", s1);
	printf("%s\n", memcpy(s, s1, 2));
	printf("%s\n", s);
	return (0);
}
