/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:36:44 by tibarike          #+#    #+#             */
/*   Updated: 2024/12/02 14:09:43 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_nb(unsigned int nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

int	ft_putunbr(unsigned int n)
{
	char	num[10];
	int		i;
	int		len;

	len = len_nb(n);
	i = 0;
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (n > 0)
	{
		num[i++] = (n % 10) + '0';
		n = n / 10;
	}
	while (--i >= 0)
		ft_putchar(num[i]);
	return (len);
}
