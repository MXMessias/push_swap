/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:06:28 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/07 17:38:58 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tdest;
	unsigned char	*tsrc;

	tdest = (unsigned char *)dest;
	tsrc = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			(tdest[n - 1] = tsrc[n - 1]);
			n--;
		}
	}
	if (dest < src)
		ft_memcpy(dest, src, n);
	return (dest);
}
/*int main()
{
	char	src[15];
	char	dest[20];
	
	dest[20] = "M";
	src[15] = "Maxwel";
	ft_memmove(dest, src, ft_strlen(src) + 1);
	printf("%s\n", (dest));
	return (0);
}*/