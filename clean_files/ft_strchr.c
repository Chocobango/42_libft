/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:18:17 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/12 17:36:35 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Go through the string until the end or until the match is found.
// If needle wasn't '\0' and nothing was found, return NULL,
// Otherwise return result (end of the string in case of '\0')
char	*ft_strchr(const char *s, int c)
{
	char	needle;
	char	*res;

	needle = (char)c;
	res = (char *)s;
	while (*res && *res != needle)
		res++;
	if (!*res && needle)
		return (NULL);
	else
		return (res);
}
/* 
void	test(const char *s, int c)
{
	printf("Searching for '%c' in '%s': '%s' -> '%s'\n",
			c, s, strchr(s, c), ft_strchr(s, c));
}

int	main(void)
{
	char	s[3];

	test("Hello there", 'e');
	test("Hello there", '\0');
	test("Hello there", 0);
	test("a", 'b');
	test("", 'h');
	s[0] = '\0';
	test(s, 0);
	return (0);
}
 */