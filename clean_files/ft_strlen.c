/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:19:07 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/12 17:38:39 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	res;

	res = 0;
	while (s[res])
		res++;
	return (res);
}
/* 
int	main(void)
{
	char	*s;

	s = "		";
	printf("%s: %lu - %lu\n", s, strlen(s), ft_strlen(s));	
	return(0);
}
 */