/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:09:25 by vvagapov          #+#    #+#             */
/*   Updated: 2022/10/25 17:17:17 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c){
	return ((c >= 32 && c <= 63) || (c >= 64 && c <= 126));
}

int main(void)
{
	unsigned char c;
	c = '1';
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isprint(c), ft_isprint(c));
	return(0);
}
