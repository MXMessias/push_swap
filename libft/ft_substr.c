/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:27:35 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/15 18:57:48 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*nstr;

	i = 0;
	nstr = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	nstr = ft_calloc(len + 1, sizeof(char));
	if (nstr == NULL)
		return (NULL);
	while (s[i] && len > 0)
	{
		nstr[i] = s[start + i];
		i++;
		len--;
	}
	return (nstr);
}

/*int	main(void)
{
	char	sbstr[] = ft_substr("ola tudo bem com todos voces ?", 3, 5);
	printf("%s", sbstr);
	free(sbstr);
	return (0);
}
*/