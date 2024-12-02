/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:25:08 by tibarike          #+#    #+#             */
/*   Updated: 2024/12/02 14:19:19 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <libc.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putnbr_ux(unsigned int num);
int		ft_putnbr_lx(unsigned int num);
int		ft_putnbr(int n);
int		ft_putadd(unsigned long num);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *str);
int		ft_putunbr(unsigned int n);

#endif
