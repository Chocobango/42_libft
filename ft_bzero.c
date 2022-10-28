/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:53:22 by vvagapov          #+#    #+#             */
/*   Updated: 2022/10/26 17:10:58 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *str;

	i = 0;
	str = s;
	while (i < n && str[i])
	{
		str[i] = '\0';
		i++;
	}
}

int main(void)
{
	char *s = malloc(sizeof(char) * 10);
	s[9] = '\0';
	for (int i = 0; i < 9; i++)
		s[i] = i + 'a';
	ft_bzero(s, 1);
	printf("%s\n", s);
	for (int i = 0; i < 10; i++)
		printf("%c\n", s[i]);
	return (0);
}
