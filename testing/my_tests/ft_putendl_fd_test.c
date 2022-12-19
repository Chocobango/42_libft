/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:26:39 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/20 19:30:55 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	test(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putendl_fd(s, fd);
}

int main(void)
{
	char	*s;
	s = (char *)malloc(sizeof(char) * 10 + 1);
	s[10] = '\0';
	for (int i = 0; i < 10; i++)
	{
		s[i] = '0' + i;
	}
	test(s, 1);
	test("hello", 1);
	test("", 1);
}