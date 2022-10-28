/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:43:37 by vvagapov          #+#    #+#             */
/*   Updated: 2022/10/27 22:53:29 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// First the function looks for terminating 0 in dst.
// If 0 wasn't found within the buffer size, stop.
// Go through src string until it's over or
// until the buffer is over and copy to dst.
// Place the terminating zero if buffer is large enough.
// Calculate length of src string.
// Return sum of src length and either dst length
// or dstsize, if dst length was longer than buffer.

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t i;

	dst_len = 0;
	while ((dst_len < dstsize) && dst[dst_len])
	{
		dst_len++;
	}
	i = 0;
	while ((dst_len + i + 1) < (dstsize) && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < dstsize)
	{
		dst[dst_len + i] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i + dst_len);
}

void test(int size)
{
    char string[] = "Hello";
    char buffer[30];
    int r;

	buffer[0] = 'a';
	buffer[1] = 'b';
	buffer[2] = 'c';
	buffer[3] = '\0';
	buffer[4] = 'd';
    r = ft_strlcat(buffer, string, size);

    printf("For size %d: added '%s' to '%s', length %d\n",
			size,
            string,
            buffer,
            r
          );
}

int main(void)
{
//    test(19);
//    test(10);
	test(5);
	test(4);
	test(3);
	test(2);
    test(1);
    test(0);

    return(0);
}
