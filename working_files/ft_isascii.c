/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:58:48 by vvagapov          #+#    #+#             */
/*   Updated: 2022/10/25 17:07:15 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c){
	return (c >= 0 && c <= 127);
}

int main(void){
	char c;
	c = '\0';
	printf("%i or %c -> orig: %i, mine: %i\n", c, c, isascii(c), ft_isascii(c));	c = ' ';
	printf("%i or %c -> orig: %i, mine: %i\n", c, c, isascii(c), ft_isascii(c));	c = 53;
	printf("%i or %c -> orig: %i, mine: %i\n", c, c, isascii(c), ft_isascii(c));	c = 127;
	printf("%i or %c -> orig: %i, mine: %i\n", c, c, isascii(c), ft_isascii(c));	c = -1;
	printf("%i or %c -> orig: %i, mine: %i\n", c, c, isascii(c), ft_isascii(c));




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
