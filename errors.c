/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:17:08 by mmessias          #+#    #+#             */
/*   Updated: 2024/08/09 15:21:54 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	printerror(void)
{
	ft_putendl_fd("Error", 2);
	exit (1);
}

void	checker(int	argc, char **argv, int *len)
{
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return;
	if (!numbers(argv))
		printerror();
	if (!arguments(argv, len))
		printerror();
}

int	numbers( char	**nbrs)
{
	int	i;
	int	j;
	bool	conf;
}