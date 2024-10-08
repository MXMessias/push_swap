/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:29:47 by mmessias          #+#    #+#             */
/*   Updated: 2024/10/08 16:36:21 by mmessias         ###   ########.fr       */
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
}