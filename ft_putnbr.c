/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:36:29 by tibarike          #+#    #+#             */
/*   Updated: 2024/11/21 20:36:31 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_nb(long nb)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}


int	ft_putnbr(int n)
{
	char    num[12];
	long    nb;
	int     i;
	int		len;

	nb = n;
	len = len_nb(nb);
	i = 0;
	if (nb == 0)
	    return (ft_putchar('0'), 1); 
	if (nb < 0)
	{
	        ft_putchar('-');
	        nb = -nb;
	}
	while (nb > 0)
	{
	        num[i++] = (nb % 10) + '0';
	        nb = nb / 10;
	}
	while (--i >= 0)
	        ft_putchar(num[i]);
	return (len);
}
