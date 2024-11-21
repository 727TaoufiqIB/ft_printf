/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:25:08 by tibarike          #+#    #+#             */
/*   Updated: 2024/11/21 20:35:01 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
#include <libc.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putnbr_ux(int num);
int	ft_putnbr_lx(int num);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_strlen(const char *str);
int	ft_putunbr(unsigned int n);

#endif
