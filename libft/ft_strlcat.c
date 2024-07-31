/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:55:36 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/22 21:15:52 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	s;
	size_t	d;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	s = 0;
	d = ft_strlen(dst);
	if (size - 1 >= lendst && size > 0)
	{
		while (src[s] != '\0' && d < (size - 1))
		{
			(dst[d] = src[s]);
			d++;
			s++;
		}
		dst[d] = '\0';
	}
	if (size < lendst)
		(lendst = size);
	return (lendst + lensrc);
}
/*int	main(void)
{
	char	dst[15] = "abcdefghijklm";
	char	src[15] = "nopqrstuvwxyz";

	printf("%zu", ft_strlcat(dst, src, 5));
	return (0);
}*/