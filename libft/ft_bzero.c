/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:14:08 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/07 14:34:57 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	i = 0;
	c = s;
	while (i < n)
	{
		(c[i] = 0);
		i++;
	}
}
/*int main(void)
{
	char	s[30] = "Maxwel";
	ft_bzero(s, 3);
	printf("%s",s);
}*/