/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:53:30 by dimolin2          #+#    #+#             */
/*   Updated: 2022/10/26 18:53:31 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_print(const char **str, va_list arg, int *len)
{
	char	*stringa;

	*str += 1;
	if (**str == 'c')
		ft_putchar_fd((char)va_arg(arg, int), 1, len);
	else if (**str == 's')
	{
		stringa = va_arg(arg, char *);
		ft_putstr_len(stringa, 1, len);
	}
	else if (**str == 'p')
		ft_print_p(va_arg(arg, uintptr_t), 1, len);
	else if (**str == 'd' || **str == 'i')
		ft_putnbr_len(va_arg(arg, int), 1, len);
	else if (**str == 'u')
		ft_putunsigned_len(va_arg(arg, unsigned int), 1, len);
	else if (**str == 'x')
		ft_putnbr_base_fd(va_arg(arg, unsigned int), 1, len);
	else if (**str == 'X')
		ft_putnbr_xup(va_arg(arg, unsigned int), 1, len);
	else if (**str == '%')
		ft_putchar_fd('%', 1, len);
	*str += 1;
	return (*len);
}

int	ft_print_and_percent(const char *str, va_list arg, int *len)
{
	while (*str)
	{
		if (*str == '%')
			ft_check_print(&str, arg, len);
		else
		{
			ft_putchar_fd(*str, 1, len);
			str++;
		}
	}
	return (*len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start(args, str);
	if (!str)
		return (0);
	ft_print_and_percent(str, args, &len);
	va_end(args);
	return (len);
}
