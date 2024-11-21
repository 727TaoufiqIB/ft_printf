/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ux.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:21:32 by tibarike          #+#    #+#             */
/*   Updated: 2024/11/21 20:37:46 by tibarike         ###   ########.fr       */
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

int	ft_putnbr_ux(int num)
{
	long	lnum;
	char	converted[33];
	int		i;
	int		len;
	char	base[17];

	lnum = num;
	ft_strcpy(base, "0123456789ABCDEF");
	len = 0;
	if (lnum == 0)
		ft_putchar('0');
	if (lnum < 0)
	{
		lnum = -lnum;
		ft_putchar('-');
	}
	i = 0;
	while (lnum > 0)
	{
		converted[i++] = base[lnum % 16];
		lnum = lnum / 16;
	}
	while (i > 0)
		len = len + ft_putchar(converted[--i]);
	return (len);
}
// int main()
// {
// 	printf("\n%d", ft_putnbr_ubase(255));

// }