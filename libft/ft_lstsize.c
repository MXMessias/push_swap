/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 23:03:49 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/18 23:40:35 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	c;

	c = 0;
	while (lst)
	{
		lst = lst->next;
		c++;
	}
	return (c);
}
/*int	main(void)
{
	t_list	*list;
	
	list = ft_lstnew("ola");
	list->next = ft_lstnew("tudo");
	list->next->next = ft_lstnew("bem?");
	
	printf("%d", ft_lstsize(list));
}*/