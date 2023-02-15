/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:19:03 by dimolin2          #+#    #+#             */
/*   Updated: 2022/11/14 18:19:05 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_xup(uintptr_t nbr, int fd, int *len)
{
	if (nbr >= 16)
	{
		ft_putnbr_xup(nbr / 16, fd, len);
		ft_putnbr_xup(nbr % 16, fd, len);
	}
	else
		ft_putchar_fd("0123456789ABCDEF"[nbr], fd, len);
}

void	ft_putnbr_base_fd(uintptr_t nbr, int fd, int *len)
{
	if (nbr >= 16)
	{
		ft_putnbr_base_fd(nbr / 16, fd, len);
		ft_putnbr_base_fd(nbr % 16, fd, len);
	}
	else
		ft_putchar_fd("0123456789abcdef"[nbr], fd, len);
}
