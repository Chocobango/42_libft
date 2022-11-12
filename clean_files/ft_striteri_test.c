/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:06:45 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/12 23:15:07 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void f(unsigned int i, char *c)
{
	*c = i % 10 + *c;
}

void test(char *s, void (*f)(unsigned int, char*))
{
	printf("'%s' -> ", s);
	ft_striteri(s, f);
	printf("'%s'\n", s);
}

int main(void)
{
	char	*s;
	unsigned int	len;
	unsigned int	i;

	len = 11;
	s = (char *)malloc(sizeof(char) * len + 1);
	s[len] = '\0';
	i = 0;
	while (i < len)
	{
		s[i] = '0';
		i++;
	}
	test(s, f);
	free(s);
	return (0);
}