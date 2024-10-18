/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:29:47 by mmessias          #+#    #+#             */
/*   Updated: 2024/10/18 15:33:18 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	cresc_order(t_stack *stack)
{
	if(!stack)
		return (true);
	while (stack->next)
	{
		if (stack->input > stack->next->input)
			return (false);
		stack = stack->next;
	}
	return (true);
}

void	three_elements(t_stack **stack)
{
	t_stack	*biggest;

	biggest = finder_big(*stack);
	if (biggest == *stack)
		check_op(stack, NULL, RA);
	else if ((*stack)->next == biggest)
		check_op(stack, NULL, RRA);
	if ((*stack)->input > (*stack)->next->input)
		check_op(stack, NULL, SA);
}

void	general_case(t_stack **sa, t_stack **sb)
{
	int	size;

	size = check_stk_len(*sa);
	if (size-- > 3 && !cresc_order(*sa))
		check_op(sa, sb, PB);
	while (size-- > 3 && !cresc_order(*sa))
	{
		prep_for_mov(*sa, *sb);
		move_cheap_to_sb(sa, sb);
	}
	three_elements(sa);
	while (*sb)
	{
		org_sa_sb(*sa, *sb);
		back_to_sa(sa, sb);
	}
	check_median_index(*sa);
	first_min(sa);
}
