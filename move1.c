/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:35:46 by mmessias          #+#    #+#             */
/*   Updated: 2024/10/14 17:50:52 by mmessias         ###   ########.fr       */
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
