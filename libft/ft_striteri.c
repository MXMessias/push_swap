/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:48:10 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/15 16:17:25 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*void	tlwr(unsigned int i, char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}
int main(void)
{
	char	str[] = "MAXWEL";

	ft_striteri(str, &tlwr);
	printf("%s\n", str);
	return 0;
}*/