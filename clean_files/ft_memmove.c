/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:52:45 by vvagapov          #+#    #+#             */
/*   Updated: 2022/12/19 17:32:27 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Should I throw an error about overflow like in the original?

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;
	size_t		i;

	if (!src && !dst)
		return (NULL);
	s = src;
	d = dst;
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}
/* 
int	main(void)
{
	char	str[];

	str[] = "what do you know about it she asked, clueless";
	puts(str);
	puts(str + 20);
	puts(str + 15);
	ft_memmove(str + 15, str + 20, 10);
	puts(str);
	return (0);
}
 */