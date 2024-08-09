/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmessias <mmessias@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:48:23 by mmessias          #+#    #+#             */
/*   Updated: 2024/08/08 15:50:30 by mmessias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*int	main(void)
{
	char	c;
	int		fd;

	c = 'm';
	fd = 1;
	ft_putchar_fd(c, fd);
}*/
