/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:11:29 by mmessias          #+#    #+#             */
/*   Updated: 2024/08/13 08:37:53 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stddef.h>

typedef enum moves
{
	SA,
	SB,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR,
}			t_moves;

typedef struct s_stack
{
	int		input;
	int		index;
	int		cost;
	bool	up_median;
	bool	cheapest;
	struct s_stack	*target_node;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

#endif