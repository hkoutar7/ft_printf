/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 04:23:32 by hkoutar-          #+#    #+#             */
/*   Updated: 2023/01/28 04:26:15 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_point(unsigned long ptr, int *len)
{
	if (ptr >= 0 && ptr <= 9)
	{
		ft_putc(ptr + '0', len);
	}
	else if (ptr >= 10 && ptr < 16)
	{
		ft_putc((ptr % 10) + 'a', len);
	}
	else
	{
		ft_point(ptr / 16, len);
		ft_point(ptr % 16, len);
	}
}

void	ft_pointer(void *ptr, int *len)
{
	unsigned long	p;

	p = (unsigned long)ptr;
	ft_putc('0', len);
	ft_putc('x', len);
	ft_point(p, len);
}
