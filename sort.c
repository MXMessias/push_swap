/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:29:47 by mmessias          #+#    #+#             */
/*   Updated: 2024/09/06 15:53:47 by mmessias         ###   ########.fr       */
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