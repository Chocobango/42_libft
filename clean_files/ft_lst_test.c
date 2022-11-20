/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:18:57 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/20 21:30:44 by vvagapov         ###   ########.fr       */
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
	ft_lstadd_front(&l, node);
	ft_lstadd_front(&l, ft_lstnew("node2"));
	ft_lstadd_front(&l, ft_lstnew("node3"));
	ft_lstiter(l, ft_putstr);
	ft_putchar_fd('\n', 1);
	return (0);
}