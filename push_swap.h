/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:11:29 by mmessias          #+#    #+#             */
/*   Updated: 2024/10/16 20:42:57 by mmessias         ###   ########.fr       */
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
#include <limits.h>

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
	bool			above_median;
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
void	rotate_two(t_stack **sa, t_stack **sb, t_stack *cheap);

void	push(t_stack **src, t_stack **dest, char *str);
void	rev_rotate_two(t_stack **sa, t_stack **sb, t_stack *cheap);
void	rrr(t_stack **sa, t_stack **sb, char *str);
void	rr (t_stack **sa, t_stack **sb, char *str);

void	three_elements(t_stack **stack);
t_stack	*finder_big(t_stack *stack);
void	general_case(t_stack **sa, t_stack **sb);
void	prep_for_mov(t_stack *sa, t_stack *sb);
void	check_median_index(t_stack *stack);
void	target_sb(t_stack *sa, t_stack *sb);
void	cost_sa_sb(t_stack *sa, t_stack *sb);
void	cheap_node(t_stack *stack);
t_stack *find_cheapest(t_stack *stack);

void	org_node_stack(t_stack **stack, t_stack *node, char stack_id);
void	move_cheap_to_sb(t_stack **sa, t_stack **sb);
void	org_sa_sb(t_stack *sa, t_stack*sb);
void	find_node_to_sa(t_stack *sa, t_stack *sb);
t_stack	*find_min_node(t_stack *sa);

#endif