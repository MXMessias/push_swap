/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:28:37 by mmessias          #+#    #+#             */
/*   Updated: 2024/08/28 22:22:51 by mmessias         ###   ########.fr       */
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
