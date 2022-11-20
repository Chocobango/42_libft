/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:18:57 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/20 21:58:18 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_putstr(void *s)
{
	ft_putstr_fd((char *)s, 1);
	ft_putstr_fd(" -> ", 1);
}

int main(void)
{
	t_list	*node;
	node = ft_lstnew("node1");

	t_list	*l;
	l = NULL;
	ft_putstr_fd("LAST NODE: ", 1);
	ft_lstiter(ft_lstlast(l), ft_putstr);
	ft_putchar_fd('\n', 1);
	printf("list size: %d\n", ft_lstsize(l));
	ft_lstadd_front(&l, node);
	ft_putstr_fd("LAST NODE: ", 1);
	ft_lstiter(ft_lstlast(l), ft_putstr);
	ft_putchar_fd('\n', 1);
	ft_lstadd_front(&l, ft_lstnew("node2"));
	ft_lstadd_front(&l, ft_lstnew("node3"));
	ft_lstiter(l, ft_putstr);
	ft_putchar_fd('\n', 1);
	printf("list size: %d\n", ft_lstsize(l));
	ft_putstr_fd("LAST NODE: ", 1);
	ft_lstiter(ft_lstlast(l), ft_putstr);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("ADD TO BACK: ", 1);
	ft_lstadd_back(&l, ft_lstnew("node4"));
	ft_lstiter(l, ft_putstr);
	ft_putchar_fd('\n', 1);
	return (0);
}