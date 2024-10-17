/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:50:49 by mmessias          #+#    #+#             */
/*   Updated: 2024/10/17 20:32:55 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	move_cheap_to_sb(t_stack **sa, t_stack **sb)
{
	t_stack	*cheapest;
	
	cheapest = find_cheapest(*sa);
	if (cheapest->above_median
		&& cheapest->target_node->above_median)
		rotate_two(sa, sb, RR);
	else if (!(cheapest->above_median)
		&& !(cheapest->target_node->above_median))
		rev_rotate_two(sa, sb, cheapest);
	org_node_stack(sa, cheapest, 'a');
	org_node_stack(sb, cheapest->target_node, 'b');
	check_op(sa, sb, PB);
}

void	back_to_sa(t_stack **sa, t_stack **sb)
{
	org_node_stack(sa, (*sb)->target_node, 'a');
	check_op(sb, sa, PA);
}
