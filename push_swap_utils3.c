/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:37:00 by mmessias          #+#    #+#             */
/*   Updated: 2024/10/16 20:47:49 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_min_node(t_stack *sa)
{
	t_stack	*minimum;
	int		min_fided;

	min_fided = sa->input;
	while (sa)
	{
		if (sa->input <= min_fided)
		{
			minimum = sa;
			min_fided = sa->input;
		}
		sa = sa->next;
	}
	return (minimum);
}
