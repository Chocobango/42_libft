/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:49:11 by vvagapov          #+#    #+#             */
/*   Updated: 2022/10/25 16:57:48 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if ((uc >= '0' && uc <= '9') || (uc >= 'A' && uc <= 'Z') ||
			(uc >= 'a' && uc <= 'z'))
		return (1);
	else
		return (0);
}

int main(void)
{
	unsigned char c;
	c = '\0';
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isalnum(c), ft_isalnum(c));
	c = -15;
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isalnum(c), ft_isalnum(c));
	c = 255;
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isalnum(c), ft_isalnum(c));
	c = '9';
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isalnum(c), ft_isalnum(c));
	c = -15;
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isalnum(c), ft_isalnum(c));
	c = 53;
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isalnum(c), ft_isalnum(c));

/*	c = -255;
	printf("%u or %c -> orig: %i\n", c, c, isdigit(c));
	printf("%u or %c -> mine: %i\n", c, c, ft_isdigit(c));
	c = 1000;
	printf("%u or %c -> orig: %i\n", c, c, isdigit(c));
	printf("%u or %c -> mine: %i\n", c, c, ft_isdigit(c));
	c = 0;
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isdigit(c), ft_isdigit(c));
*/
}
