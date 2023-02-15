/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 20:05:18 by dimolin2          #+#    #+#             */
/*   Updated: 2022/11/11 20:05:19 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned_len(unsigned int nb, int fd, int *len)
{
	long long unsigned	n;

	n = (long long unsigned)nb;
	if (n >= 10)
		ft_putnbr_len(n / 10, fd, len);
	ft_putchar_fd((char)(n % 10 + 48), fd, len);
}
