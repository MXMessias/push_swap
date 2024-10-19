/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:29:11 by mmessias          #+#    #+#             */
/*   Updated: 2024/10/19 16:15:04 by mmessias         ###   ########.fr       */
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

void	rr(t_stack **sa, t_stack **sb, char *str)
{
	str = NULL;
	rotate(sa, str);
	rotate(sb, str);
	str = "rr";
	ft_putendl_fd(str, 1);
}

void	rotate_two(t_stack **sa, t_stack **sb, t_stack *cheap)
{
	while (*sb != cheap->target_node && *sa != cheap)
		check_op(sa, sb, RR);
	check_median_index(*sa);
	check_median_index(*sb);
}

void	rev_rotate_two(t_stack **sa, t_stack **sb, t_stack *cheap)
{
	while (*sb != cheap->target_node && *sa != cheap)
		check_op (sa, sb, RRR);
	check_median_index(*sa);
	check_median_index(*sb);
}
