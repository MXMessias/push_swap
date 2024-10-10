/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:29:11 by mmessias          #+#    #+#             */
/*   Updated: 2024/10/10 21:15:57 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack **sa, t_stack **sb, char *str)
{
	str = NULL;
	reverse_rotate(sa, str);
	reverse_rotate(sb, str);
	str = "rrr";
	ft_putendl_fd(str, 1);
}

void	rr (t_stack **sa, t_stack **sb, char *str)
{
	str = NULL;
	rotate(sa, str);
	rotate(sb, str);
	str = "rr";
	ft_putendl_fd(str, 1);
}