/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:24:35 by mmessias          #+#    #+#             */
/*   Updated: 2024/09/18 16:21:34 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	check_op(t_stack **stackA, t_stack **stackB, t_moves op)
{
	if (op == SA)
		return (swap(stackA, "sa"));
	else if (op == SB)
		return (swap(stackA, "sb"));
	else if (op == PA)
		return (push(stackA, stackA, "pa"));
	else if (op == PB)
		return (push(stackA, stackB, "pb"));
	else if (op == RA)
		return (rotate(stackA, "ra"));
	else if (op == RB)
		return (rotate(stackA, "rb"));
	else if (op == RR)
		return (rr(stackA, stackB, "rr"));
	else if (op == RRA)
		return (reverse_rotate(stackA, "rra"));
	else if (op == RRB)
		return (reverse_rotate(stackA, "rrb"));
	else if (op == RRR)
		return (rrr(stackA, stackB, "rrr"));
}

void	swap(t_stack **stack, char *str)
{
	t_stack	*temp;

	temp = (*stack)->next;
	(*stack)->next = temp->next;
	temp->next = (*stack);
	(*stack) = temp;
	if (str)
		ft_putendl_fd(str, 1);
}

void	rotate(t_stack **stack, char *str)
{
	t_stack	*aux;
	t_stack	*last;
	t_stack	*sec;

	aux = *stack;
	last = lastnode(*stack);
	sec = (*stack)->next;
	/*sift_stack(*stack);*/
	(*stack) = sec;
	last->next = aux;
	aux->next = NULL;
	if (str)
		ft_putendl_fd(str, 1);
}
