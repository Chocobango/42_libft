/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:31:50 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/05 17:25:17 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *str;

	str = b;
	while (*str && len)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	return b;
}
/* 
int main(void)
{
	char *s = malloc(sizeof(char) * 10);
	s[9] = '\0';
	for (int i = 0; i < 9; i++)
		s[i] = i + 'a';
//	printf("%s\n", memset(s, '$', 3));
//	char *s1 = "herro cat";
	printf("%s\n", ft_memset(s, '$', 30));
	return (0);
}
 */