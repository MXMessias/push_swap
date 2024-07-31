/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:03:40 by mmessias          #+#    #+#             */
/*   Updated: 2024/05/16 20:58:50 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_len(int nbr)
{
	unsigned int	clen;

	clen = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		clen = clen + 1;
	while (nbr != '\0')
	{
		nbr = nbr / 10;
		clen++;
	}
	return (clen);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	char			*str;
	unsigned int	nbr;

	len = count_len(n);
	str = (char *) malloc (sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr == 0)
		str[0] = '0';
	str[len] = '\0';
	while (nbr)
	{
		str[len - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (str);
}

/*int	main(void)
{
	int		num;
	char	*res;

	num = 0;
	res = ft_itoa(num);
	printf ("%d\n", num);
	free(res);
	return (0);
}
int main (void) //teste contator
{
	printf("%u \n", count_len(-125));
}*/