/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:36:13 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/07 16:04:35 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tdest;
	unsigned char	*tsrc;
	size_t			i;

	tdest = (unsigned char *) dest;
	tsrc = (unsigned char *) src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		(tdest[i] = tsrc[i]);
		i++;
	}
	return (tdest);
}
/*int main()
{
	char	src[] = "Maxwel";
	char	dest[10];
	ft_memcpy(dest, src, 10);
	printf("%s\n", (dest));
	return (0);
}*/