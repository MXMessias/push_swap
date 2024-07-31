/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:24:34 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/25 19:11:52 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*f_node(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	void	*putf;

	putf = f(lst->content);
	newnode = ft_lstnew(putf);
	if (!newnode)
	{
		del(putf);
		return (NULL);
	}
	return (newnode);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*f_n_l;
	t_list	*act_l;
	void	*c_transf;

	if (!lst)
		return (NULL);
	act_l = f_node(lst, f, del);
	if (!act_l)
		return (NULL);
	f_n_l = act_l;
	while (lst->next)
	{
		lst = lst->next;
		c_transf = f(lst->content);
		act_l->next = ft_lstnew(c_transf);
		if (!act_l->next)
		{
			del(c_transf);
			ft_lstclear(&f_n_l, del);
			return (NULL);
		}
		act_l = act_l->next;
	}
	return (f_n_l);
}
