/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 21:06:34 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/24 00:09:41 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	free_p(char **arry, int c)
{
	int	i;

	i = 0;
	while (c > i)
		free(arry[i++]);
	free(arry);
}

static	int	count_w(char const *s, char c)
{
	int	i;
	int	o_i;

	o_i = 1;
	i = 0;
	while (*s)
	{
		if (*s == c && o_i == 0)
		{
			o_i = 1;
		}
		else if (*s != c && o_i == 1)
		{
			i++;
			o_i = 0;
		}
		s++;
	}
	return (i);
}

static	void	alloc_sbstr(char **sbstr, char const *s, char c)
{
	int	i_o;
	int	i_ay;
	int	i_sbs;

	i_o = 0;
	i_ay = 0;
	i_sbs = 0;
	while (s[i_o])
	{
		while (s[i_o] == c)
			i_o++;
		i_sbs = i_o;
		if (s[i_sbs] == '\0')
			break ;
		while (s[i_o] != c && s[i_o] != '\0')
			i_o++;
		sbstr[i_ay] = ft_substr(s, i_sbs, i_o - i_sbs);
		i_ay++;
	}
	sbstr[i_ay] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;

	i = 0;
	split = ft_calloc(count_w(s, c) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	alloc_sbstr(split, s, c);
	while (i < count_w(s, c))
	{
		if (split[i] == NULL)
		{
			free_p(split, count_w(s, c));
			return (NULL);
		}
		i++;
	}
	return (split);
}
