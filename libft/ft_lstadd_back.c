/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 23:43:06 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/19 00:08:53 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	l = ft_lstlast(*lst);
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	l->next = new;
}

/*int	main(void)
{
	t_list	*list;
	t_list	*result;

	list = NULL;
	//list = ft_lstnew("oi tudo bem?");
	ft_lstadd_back(&list, ft_lstnew("new"));
	result = ft_lstlast(list);
	printf("%s", (char *)result->content);
}*/