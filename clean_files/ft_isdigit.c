/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:13:11 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/12 17:37:47 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if (uc >= '0' && uc <= '9')
		return (1);
	else
		return (0);
}
/* 
int	main(void)
{
	unsigned char	c;

	c = '\0';
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isdigit(c), ft_isdigit(c));
	c = -15;
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isdigit(c), ft_isdigit(c));
	c = 255;
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isdigit(c), ft_isdigit(c));
	c = '9';
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isdigit(c), ft_isdigit(c));
	c = 0;
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isdigit(c), ft_isdigit(c));
	c = 90;
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isdigit(c), ft_isdigit(c));
	c = 1;
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isdigit(c), ft_isdigit(c));
	c = '\5';
	printf("%u or %c -> orig: %i, mine: %i\n", c, c, isdigit(c), ft_isdigit(c));
	c = 53;
	printf("%u or %c -> orig: %i\n", c, c, isdigit(c));
	printf("%u or %c -> mine: %i\n", c, c, ft_isdigit(c));
}
 */