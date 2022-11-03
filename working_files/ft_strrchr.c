/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:39:02 by vvagapov          #+#    #+#             */
/*   Updated: 2022/10/27 23:48:08 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// Go till the end of the string, remember last match if it exists.
// If search was looking for '\0', return address of the end of the string.
// Otherwise return res (NULL or address of the last match)
char *ft_strrchr(const char *s, int c)
{
	char needle;
	char *res;
	char *temp;

	needle = (char)c;
	temp = (char *)s;
	res = NULL;
	while (*temp)
	{
		if (*temp == needle)
			res = temp;
		temp++;
	}
	if (!needle)
		return temp;
	else
		return res;
}

void test(const char *s, int c)
{
	printf("Searching for '%c' in '%s': '%s' -> '%s'\n",
			c, s, strrchr(s, c), ft_strrchr(s, c));
}

int main(void)
{
	test("Hello there", 'e');
	test("Hello there", '\0');
	test("Hello there", 0);
	test("a", 'b');
	test("", 'h');
	char s[3];
	s[0] = '\0';
	test(s, 0);
	return 0;
}
