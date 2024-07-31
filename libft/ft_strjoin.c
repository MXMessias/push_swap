/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:59:54 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/15 20:43:06 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	t;
	size_t	p;
	char	*ttl;

	t = 0;
	p = 0;
	ttl = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (ttl == NULL)
		return (NULL);
	while (s1[p])
	{
		ttl[t] = s1[p];
		p++;
		t++;
	}
	p = 0;
	while (s2[p])
	{
		ttl[t] = s2[p];
		p++;
		t++;
	}
	ttl[t] = '\0';
	return (ttl);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "ola esta tudo";
	s2 = " bem com voce?";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/