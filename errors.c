/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:17:08 by mmessias          #+#    #+#             */
/*   Updated: 2024/08/13 16:03:26 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printerror(void)
{
	ft_putendl_fd("Error", 2);
	exit (1);
}

void	checker(int argc, char **argv, int *len)
{
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return ;
	if (!numbers(argv))
		printerror();
	if (!arguments(argv, len))
		printerror();
}

int	numbers( char	**nbrs)
{
	int		i;
	int		j;
	bool	valid;

	i = 1;
	j = 0;
	valid = 0;
	while (nbrs[i])
	{
		while (nbrs[i][j])
		{
			if ((nbrs[i][j] == '+' || nbrs[i][j] == '-')
				&& (!ft_isdigit(nbrs[i][j + 1])))
				return (0);
			if (!valider_char(nbrs[i][j]))
				return (0);
			if (ft_isdigit(nbrs[i][j]))
				valid = true;
			j++;
		}
		i++;
	}
	if (!valid)
		printerror();
	return (1);
}

int	check_args( int **str, int *len)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (str[i])
	{
		while (str[i][j])
		{
			while (str[i][j] == ' ' || str[i][j] == '\t')
				j++;
			if (str[i][j])
			{
				if (ft_atoi(&str[i][j]) != ft_ato)
				{
					/* code *
				}
				
			}
		}
		
	}
	
}