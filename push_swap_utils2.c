/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:01:16 by mmessias          #+#    #+#             */
/*   Updated: 2024/10/09 20:51:54 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prep_for_mov(t_stack *sa, t_stack *sb)
 {
	check_median_index(sa);
	check_median_index(sb);
	
 }

void	check_median_index(t_stack *stack)
 {
	int i;
	int	median;

	i = 0;
	if (!stack)
		return ;
	median = check_stk_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->above_median = true;
		else 
			stack->above_median = false;
		stack = stack->next;
		i++;
	}
 }
 
void	target_sb(t_stack *sa, t_stack *sb)
 {
	t_stack	*read_b;
	t_stack	*target;
	long	BbLa;

	while (sa)
	{
		BbLa = LONG_MIN;
		read_b = sb;
		while (read_b)
		{
			if (read_b->input < sa->input
					&& read_b->input > BbLa)
					{
						BbLa = read_b->input;
						target = read_b;
					}
				read_b = read_b->next;
		}
		if (BbLa == LONG_MIN)
			sa->target_node = finder_big(sb);
		else
			sa->target_node = target;
		sa = sa->next;
	}
 }
 