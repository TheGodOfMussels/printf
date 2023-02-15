/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:19:18 by dimolin2          #+#    #+#             */
/*   Updated: 2022/11/14 18:19:19 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_p(uintptr_t nbr, int fd, int *len)
{
	if (!nbr)
		ft_putstr_fd("(nil)", fd, len);
	else
	{
		ft_putstr_fd("0x", fd, len);
		ft_putnbr_base_fd(nbr, fd, len);
	}
}
