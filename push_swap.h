/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:11:29 by mmessias          #+#    #+#             */
/*   Updated: 2024/10/08 16:35:31 by mmessias         ###   ########.fr       */
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
	int				input;
	int				index;
	int				cost;
	bool			up_median;
	bool			cheapest;
	struct s_stack	*target_node;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

int		valider_char(char c);
int		valider_nbr(char *str, int *j);
long	atol(const char *str);

void	printerror(void);
void	checker(int argc, char **argv, int *len);
int		numbers(char **nbrs);
int		check_args(char **str, int *len);
void	duplication(int *nbr, int len);

int		*conv_nbrs(char **str, int *nbr);

t_stack	*lastnode(t_stack *stack);

void	createnodes(t_stack **stack, int n);

void	start_sta(t_stack **stack, int *input, int len);

bool	cresc_order(t_stack *stack);

int		check_stk_len(t_stack *stack);

void	check_op(t_stack **stackA, t_stack **stackB, t_moves op);

void	swap(t_stack **stack, char *str);
void	rotate(t_stack **stack, char *str);
void	reverse_rotate(t_stack **stack, char *str);
void	push(t_stack **src, t_stack **dest, char *str);

void	three_elements(t_stack **stack);
t_stack	*finder_big(t_stack *stack);

#endif