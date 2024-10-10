/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:28:37 by mmessias          #+#    #+#             */
/*   Updated: 2024/10/09 16:04:04 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*conv_nbrs(char **str, int *nbr)
{
	int	i;
	int	j;
	int	p;

	i = 1;
	j = 0;
	p = 0;
	if (!nbr)
		return (0);
	while (str[i])
	{
		while (str[i][j])
		{
			while (str[i][j] == ' ' || str[i][j] == '\t' || str[i][j] == '\n')
				j++;
			if (str[i][j])
				nbr[p++] = ft_atoi(&str[i][j]);
			while (ft_isdigit(str[i][j]) || str[i][j] == '+' 
					|| str[i][j] == '-')
					j++;
		}
		i++;
	}
	return (nbr);
}

void	start_sta(t_stack **stack, int *input, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		createnodes(stack, input[i]);
		i++;
	}
}

int	check_stk_len(t_stack *stack)
{
	int	len;

	len = 0;
	while (stack)
	{
		len++;
		stack = stack->next;
	}
	return (len);
}

t_stack	*finder_big(t_stack *stack)
{
	int	bigger;
	t_stack	*big_node;

	bigger = stack->input;
	while (stack)
	{
		if (stack->input >= bigger)
		{
			big_node = stack;
			bigger = stack->input;
		}
	stack = stack->next;
	}
	return (big_node);
}
