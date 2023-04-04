/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 04:28:59 by hkoutar-          #+#    #+#             */
/*   Updated: 2023/01/28 04:31:15 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putdec(int num, int *len)
{
	long	n;

	n = num;
	if (n < 0)
	{
		n *= -1;
		ft_putc('-', len);
	}
	if (n >= 0 && n <= 9)
		ft_putc(n + '0', len);
	else
	{
		ft_putdec((n / 10), len);
		ft_putdec((n % 10), len);
	}
}
