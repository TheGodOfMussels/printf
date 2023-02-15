/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:13:31 by dimolin2          #+#    #+#             */
/*   Updated: 2022/11/11 19:13:32 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *len)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd, len);
		i++;
	}
}

void	ft_putstr_len(char *stringa, int fd, int *len)
{
	if (!stringa)
		ft_putstr_fd("(null)", fd, len);
	else
		ft_putstr_fd(stringa, fd, len);
}
