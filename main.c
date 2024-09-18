/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:45:01 by mmessias          #+#    #+#             */
/*   Updated: 2024/09/09 18:07:57 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*sa;
	t_stack	*sb;
	int		*input;
	int		len;

	sa = NULL;
	sb = NULL;
	len = 0;
	checker(argc, argv, &len);
	input = ft_calloc(len, sizeof(int));
	input = conv_nbrs(argv, input);
	duplication(input, len);
	start_sta(&sa, input, len);
	if (!cresc_order(sa))
	{
		if (check_stk_len(sa) == 2)
			
	}
	
}