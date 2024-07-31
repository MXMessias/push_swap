/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:20:37 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/07 13:59:58 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == (const char)c)
			return (&str[i]);
		i++;
	}
	if ((char)c == 0)
		return (&str[i]);
	return (0);
}
/*int main(void)
{
	char	*s = "Maxwel";
	
	printf("%s", ft_strchr(s, 'w'));
	return (0);
}*/