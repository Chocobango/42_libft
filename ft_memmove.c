/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:52:45 by vvagapov          #+#    #+#             */
/*   Updated: 2022/10/28 20:29:14 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Should I throw an error about overflow like in the original? 

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *buf;
	const char *s;
	char *d;
	size_t i;

	i = 0;
	s = src;
	d = dst;
	buf = malloc(len);
	while (i < len)
	{
		buf[i] = s[i];
		i++;
	}
	while(i > 0)
	{
		i--;
		d[i] = buf[i];
	}
	free(buf);
	return dst;
}

int main ()
{
  char str[] = "what do you know about it she asked, clueless";
  puts (str);
  puts (str+20);
  puts (str+15);
  ft_memmove (str+20, str+15, 15);
  puts (str);
  return 0;
}
