/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:58:48 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/05 17:22:20 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c){
	return (c >= 0 && c <= 127);
}
/* 
int main(void){
	char c;
	c = '\0';
	printf("%i or %c -> orig: %i, mine: %i\n", c, c, isascii(c), ft_isascii(c));	c = ' ';
	printf("%i or %c -> orig: %i, mine: %i\n", c, c, isascii(c), ft_isascii(c));	c = 53;
	printf("%i or %c -> orig: %i, mine: %i\n", c, c, isascii(c), ft_isascii(c));	c = 127;
	printf("%i or %c -> orig: %i, mine: %i\n", c, c, isascii(c), ft_isascii(c));	c = -1;
	printf("%i or %c -> orig: %i, mine: %i\n", c, c, isascii(c), ft_isascii(c));
}
 */