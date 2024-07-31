/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:38:03 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/07 15:33:42 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tpm;
	size_t			i;

	i = 0;
	tpm = (unsigned char *)s;
	while (i < n)
	{
		tpm[i] = c;
		i++;
	}
	return (tpm);
}
/*int	main(void)
{
	char	s[10] = "Maxwel";
	memset(s, 'X', 2);
	printf("%s\n",(s));
	return (0);
}*/