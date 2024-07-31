/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:47:00 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/16 00:20:43 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	f;
	char	*str;

	f = ft_strlen(s1);
	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (f > i && ft_strchr(set, s1[f - 1]))
		f--;
	str = ft_substr(s1, i, f - i);
	return (str);
}
/*
int main()
{
	char *s1 = "aaaaaa oioioi tudo de boasaaaa";
	char *set = "a";
	char	*result;

	char *result = ft_strtrim(s1, set);
	printf ("%s\n", result);
	free (result);

		return (0);
}
*/