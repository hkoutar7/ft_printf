/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsdec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 04:33:44 by hkoutar-          #+#    #+#             */
/*   Updated: 2023/01/28 04:34:56 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsdec(unsigned int num, int *len)
{
	unsigned long	n;

	n = num;
	if (n <= 9)
		ft_putc(n + '0', len);
	else
	{
		ft_putunsdec((n / 10), len);
		ft_putunsdec((n % 10), len);
	}
}
