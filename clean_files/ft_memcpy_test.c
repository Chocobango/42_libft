/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:07:11 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/21 20:18:12 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/* void test(void *dst, const void *src, size_t n)
{

} */

int	main(void)
{
	char	*s;
	char	*s1;

	s = malloc(sizeof(char) * 10);
	s[9] = '\0';
	for (int i = 0; i < 9; i++)
		s[i] = i + 'a';
	s1 = malloc(sizeof(char) * 3);
	s1[2] = '\0';
	for (int i = 0; i < 2; i++)
		s1[i] = i + '0';
	//printf("%s\n", s);
	//printf("%s\n", s1);
	//printf("%s\n", memcpy(s, s1, 2));
	//printf("%s\n", s);
	//printf("%s\n", memcpy(NULL, s, 1));
	return (0);
	printf("%s\n", ft_memcpy(NULL, NULL, 3));
}
