/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:51:42 by tibarike          #+#    #+#             */
/*   Updated: 2024/12/04 16:09:45 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conversion(const char *format, va_list args)
{
	int	counter;

	counter = 0;
	if (*format == 'c')
		counter += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		counter += ft_putstr(va_arg(args, char *));
	else if (*format == 'p')
	{
		counter += ft_putstr("0x");
		counter += ft_putadd(va_arg(args, unsigned long));
	}
	else if (*format == 'd' || *format == 'i')
		counter += ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
		counter += ft_putunbr(va_arg(args, unsigned int));
	else if (*format == 'x')
		counter += ft_putnbr_lx(va_arg(args, unsigned int));
	else if (*format == 'X')
		counter += ft_putnbr_ux(va_arg(args, unsigned int));
	else if (*format == '%')
		counter += ft_putchar('%');
	else
		counter += ft_putchar(*format);
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;

	va_start(args, format);
	counter = 0;
	if (write(1, format, 0) == -1)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break ;
			counter += conversion(format, args);
		}
		else
			counter += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (counter);
}
