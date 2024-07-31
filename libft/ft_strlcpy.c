/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:40:16 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/07 18:53:19 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	i;

	i = 0;
	lensrc = ft_strlen (src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			(dst[i] = src[i]);
			i++;
		}
		(dst[i] = '\0');
	}
	return (lensrc);
}
/*int	main(void)
{
	char	dst[20];
	const char *src = "Maxwel";
	size_t	size = 10;
		printf("%s'\n", dst);
	return (0);
}*/