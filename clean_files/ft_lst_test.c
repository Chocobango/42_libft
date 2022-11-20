/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:18:57 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/20 22:54:02 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_putstr(void *s)
{
	ft_putstr_fd((char *)s, 1);
	ft_putstr_fd(" -> ", 1);
}

void	*map_str(void	*s)
{
	return(ft_itoa(ft_strlen((char*)s)));
}

int main(void)
{
	char	*s;
	t_list	*node;
	

	t_list	*l;
	l = NULL;
	s = malloc(3);
	s[0] = 'a';
	s[1] = 'b';
	s[2] = '\0';
	node = ft_lstnew(s);
	ft_putstr_fd("LAST NODE: ", 1);
	ft_lstiter(ft_lstlast(l), ft_putstr);
	ft_putchar_fd('\n', 1);
	printf("list size: %d\n", ft_lstsize(l));
	ft_lstadd_front(&l, node);
	ft_lstiter(l, ft_putstr);
	ft_putchar_fd('\n', 1);
	printf("list size: %d\n", ft_lstsize(l));
	
	ft_putstr_fd("CLEAR: ", 1);
	ft_lstclear(&l, free);
	
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
	
	ft_putstr_fd("MAP: ", 1);
	t_list	*l2;
	l2 = ft_lstmap(l, map_str, free);
	ft_lstiter(l2, ft_putstr);
	ft_putchar_fd('\n', 1);
	return (0);
}