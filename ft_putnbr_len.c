/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:23:14 by dimolin2          #+#    #+#             */
/*   Updated: 2022/11/11 19:23:15 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_len(int nb, int fd, int *len)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd, len);
		n = (unsigned int)(nb * -1);
	}
	else
		n = (unsigned int)nb;
	if (n >= 10)
		ft_putnbr_len(n / 10, fd, len);
	ft_putchar_fd((char)(n % 10 + 48), fd, len);
}
