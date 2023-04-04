/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 04:31:22 by hkoutar-          #+#    #+#             */
/*   Updated: 2023/01/28 04:32:56 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int num, int *len, char c)
{
	long int	n;

	n = num;
	if (n >= 0 && n <= 9)
		ft_putc(n + '0', len);
	else if (n >= 10 && n < 16)
	{
		if (c == 'X')
			ft_putc((n % 10) + 'A', len);
		else
			ft_putc((n % 10) + 'a', len);
	}
	else
	{
		ft_puthex(n / 16, len, c);
		ft_puthex(n % 16, len, c);
	}
}
