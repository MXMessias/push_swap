/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 22:27:47 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/15 15:37:15 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;
	char	lens;

	i = 0;
	lens = ft_strlen (s);
	result = malloc((lens + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < lens)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char	tppr(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return c - 32;
	else
		return c;
}
int	main(void)
{
	char *inicial;
	char *final;

	inicial = "Maxwel";
	final = ft_strmapi(inicial, &tppr);
	printf("inicial: %s\n", inicial);
	printf("Output: %s\n", final);
	free(final);
	return (0);
}*/