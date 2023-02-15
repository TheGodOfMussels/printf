/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:58:57 by dimolin2          #+#    #+#             */
/*   Updated: 2022/10/26 18:58:58 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <limits.h>
# include <string.h>
# include <stddef.h>

void	ft_print_p(uintptr_t nbr, int fd, int *len);
void	ft_putchar_fd(char c, int fd, int *len);
void	ft_putnbr_xup(uintptr_t nbr, int fd, int *len);
void	ft_putnbr_base_fd(uintptr_t nbr, int fd, int *len);
void	ft_putnbr_len(int nb, int fd, int *len);
void	ft_putstr_fd(char *s, int fd, int *len);
void	ft_putstr_len(char *stringa, int fd, int *len);
void	ft_putunsigned_len(unsigned int nb, int fd, int *len);

int		ft_printf(const char *str, ...);
int		ft_print_and_percent(const char *str, va_list arg, int *len);
int		ft_check_print(const char **str, va_list arg, int *len);

#endif
