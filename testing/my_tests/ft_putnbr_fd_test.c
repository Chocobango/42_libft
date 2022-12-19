/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:39:26 by vvagapov          #+#    #+#             */
/*   Updated: 2022/12/19 18:51:16 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

void test(int n, int fd)
{
	ft_putnbr_fd(n, fd);
}

int main(void)
{
	test(-3463583, 1);
	ft_putchar_fd('\n', 1);
	test(0, 1);
	ft_putchar_fd('\n', 1);
	test(123, 1);
	ft_putchar_fd('\n', 1);
	test(INT_MAX, 1);
	ft_putchar_fd('\n', 1);
	test(INT_MIN, 1);
}