/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:54:06 by vvagapov          #+#    #+#             */
/*   Updated: 2022/10/27 23:14:31 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
	unsigned char res;

	res = (unsigned char)c;
	if (res >= 'a' && res <= 'z')
		return (c + 'A' - 'a');
	else
		return c;
}

void test(int c)
{
	printf("%d or %u or %c : should be: %d or %u or %c, mine: %d or %u or %c\n",
			c, c, c,
			toupper(c), toupper(c), toupper(c),
			ft_toupper(c), ft_toupper(c), ft_toupper(c));
}

int main(void)
{
	test('d');
	test(120);
	test(240);
	test('F');
	test(0);
	test(-10);
	unsigned char uc = '\200';
	test(uc);
	return 0;
}
