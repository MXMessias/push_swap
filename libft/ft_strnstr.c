/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:21:07 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/13 17:44:26 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((big == NULL) && len == 0)
		return (NULL);
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && i + j < len)
			j++;
		if (little[j] == 0)
			return ((char *)big + i);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	const char	*big;
	const char	*little;

	big = "ola tudo bem com voces?";
	little = "tudo bem";
	printf("%s\n", ft_strnstr(big, little, 20));
	printf("%s" , strstr(big, little));
}*/