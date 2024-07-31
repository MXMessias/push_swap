/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:43:06 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/13 22:03:46 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	l;
	size_t	i;

	l = ft_strlen(s) + 1;
	i = 0;
	dst = malloc(sizeof(char) * l);
	if (dst == NULL)
		return (NULL);
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*int	main(void)
{
	char	*str;
	
	str = ft_strdup("");
	printf("%s", ft_strdup(""));
	free(str);
	return (0);
}
*/