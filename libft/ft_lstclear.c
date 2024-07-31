/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 23:36:29 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/20 00:36:39 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tpm;

	while ((*lst) != NULL)
	{
		del((*lst)->content);
		tpm = (*lst)->next;
		free(*lst);
		*lst = tpm;
	}
}
