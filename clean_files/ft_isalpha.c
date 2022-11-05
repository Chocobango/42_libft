/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:33:04 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/05 17:21:43 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if ((uc >= 'a' && uc <= 'z') || (uc >= 'A' && uc <= 'Z'))
		return(1);
	else
		return(0);
}
/* 
int main(void)
{
	unsigned char c;
	c = 'b';
	printf("%u %i\n", c, isalpha(c));
	c = 3;		
	printf("%u %i\n", c, isalpha(c));
	c = 'a';	
	printf("%u %i\n", c, isalpha(c));
	c = 'A';
	printf("%u %i\n", c, isalpha(c));
	c = -10;	
	printf("%u %i\n", c, isalpha(c));
	c = 100;	
	printf("%u %i\n", c, isalpha(c));
	c = '\0';	
	printf("%u %i\n", c, isalpha(c));
	c = 1150;	
	printf("%u %i\n", c, isalpha(c));
	c = 'b';
	printf("%u %i\n", c, ft_isalpha(c));
	c = 3;		
	printf("%u %i\n", c, ft_isalpha(c));
	c = 'a';	
	printf("%u %i\n", c, ft_isalpha(c));
	c = 'A';
	printf("%u %i\n", c, ft_isalpha(c));
	c = -10;	
	printf("%u %i\n", c,  ft_isalpha(c));
	c = 100;	
	printf("%u %i\n", c,  ft_isalpha(c));
	c = '\0';	
	printf("%u %i\n", c,  ft_isalpha(c));
	c = 1150;	
	printf("%u %i\n", c,  ft_isalpha(c));
}	
 */