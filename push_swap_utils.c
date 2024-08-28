/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:10:26 by mmessias          #+#    #+#             */
/*   Updated: 2024/08/28 22:18:18 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valider_char(char c)
{
	if (c != ' ' && c != '\t' && !ft_isdigit(c) && c != '-' && c != '+')
		return (0);
	return (1);
}

int	valider_nbr(char *str, int *j)
{
	while (str[*j] == '+' || str[*j] == '-' || ft_isdigit(str[*j]))
	{
		if (ft_isdigit(str[*j]) && (str[*j + 1] == '+' || str[*j + 1] == '-'))
			return (0);
		(*j)++;
	}
	return (1);
}

long	atol(const char *str)
{
	int		sign;
	int		i;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
		result *= 10 + (str[i++] - '0');
	return (result * sign);
}

t_stack	*lastnode(t_stack *stack)
{
	t_stack	*lnode;

	while (stack->next)
		stack = stack->next;
	lnode = stack;
	return (lnode);
}

void	createnodes(t_stack **stack, int n)
{
	t_stack	*newnode;
	t_stack	*last;

	if (!stack)
		return;
	newnode = ft_calloc(1, sizeof(t_stack));
	if (!newnode)
		return;
	newnode->next = NULL;
	newnode->input = n;
	if (!(*stack))
	{
		*stack = newnode;
		newnode->prev = NULL;
	}
	else
	{
		last = lastnode(*stack);
		last->next = newnode;
		newnode->prev = last;
	}
}
