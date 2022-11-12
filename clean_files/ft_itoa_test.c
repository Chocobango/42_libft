/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:56:46 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/12 21:53:46 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void test(int n)
{
	printf("\n%d:\n", n);
	printf("%s\n",ft_itoa(n));
}

int main(void)
{
	test(0);
	test(9);
	test(-9);
	test(10);
	test(-10);
	test(8124);
	test(-9874);
	test(543000);
	test(-2147483648LL);
	test(2147483647);
	return(0);
}