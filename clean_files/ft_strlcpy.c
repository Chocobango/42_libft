/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:34:31 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/20 23:09:47 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && (i + 1 < dstsize))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}

/* 
void	test(int size)
{
	char	string[];
    char buffer[19];
    int r;

    string[] = "Hello there, V";
    r = ft_strlcpy(buffer,string,size);
    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int	main(void)
{
    test(19);
    test(10);
    test(1);
    test(0);
    return(0);
}
 */