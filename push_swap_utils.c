/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:10:26 by mmessias          #+#    #+#             */
/*   Updated: 2024/08/13 08:38:51 by mmessias         ###   ########.fr       */
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
