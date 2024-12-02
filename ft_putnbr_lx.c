/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_lx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:21:32 by tibarike          #+#    #+#             */
/*   Updated: 2024/12/02 14:24:18 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_strcpy(char *dest, char *src)
{
	unsigned int	j;

	j = 0;
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
}

int	ft_putnbr_lx(unsigned int num)
{
	char			converted[16];
	int				i;
	int				len;
	char			base[17];

	i = 0;
	len = 0;
	ft_strcpy(base, "0123456789abcdef");
	if (num == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		converted[i++] = base[num % ft_strlen(base)];
		num /= ft_strlen(base);
	}
	while (i > 0)
		len += ft_putchar(converted[--i]);
	return (len);
}
