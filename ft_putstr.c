/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibarike <tibarike@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:36:36 by tibarike          #+#    #+#             */
/*   Updated: 2024/11/21 20:36:39 by tibarike         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putstr(char *s)
{
	int     i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
    	ft_putchar(s[i]);
        i++;
    }
	return (i);
}
