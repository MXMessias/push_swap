/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:35:46 by mmessias          #+#    #+#             */
/*   Updated: 2024/10/17 16:42:49 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	org_node_stack(t_stack **stack, t_stack *node, char stack_id)
{
	while (*stack)
	{
		if (stack_id == 'a')
			{
				if (node->above_median)
					check_op(stack, NULL, RA);
				else
					check_op(stack, NULL, RRA);
			}
		else if (stack_id == 'b')
		{
			if (node->above_median)
				check_op(stack, NULL, RB);
			else
				check_op(stack, NULL, RRB);
		}
	}
}

void	org_sa_sb(t_stack *sa, t_stack*sb)
{
	check_median_index(sa);
	check_median_index(sb);
	find_node_to_sa(sa, sb);
}

void	find_node_to_sa(t_stack *sa, t_stack *sb)
{
	t_stack	*sa_index;
	t_stack	*target_n;
	long	good_place;

	good_place = LONG_MAX;
	sa_index = sa;
	while (sb)
	{
		while (sa_index)
		{
			if (sa_index->input > sb->input
				&& sa_index->input < good_place)
				{
					good_place = sa_index->input;
					target_n = sa_index;
				}
				sa_index =sa_index->next;
		}
		if (good_place == LONG_MAX)
			sb->target_node = find_min_node(sa);
		else
			sb->target_node = target_n;
		sb = sb->next;
	}
}

