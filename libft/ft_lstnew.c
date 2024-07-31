/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:02:53 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/18 00:09:42 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = malloc(sizeof(t_list));
	if (!n)
		return (NULL);
	n ->content = content;
	n->next = NULL;
	return (n);
}

/*int	main(void)
{
	t_list	*list;

	list = ft_lstnew("oiiiii como vai?");
	printf("%s", (char *)list->content);
}
*/