/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 04:27:14 by hkoutar-          #+#    #+#             */
/*   Updated: 2023/01/28 04:28:52 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puts(char *str, int *len)
{
	int	i;

	i = 0;
	if (str == NULL)
		ft_puts("(null)", len);
	else
	{
		while (*(str + i))
		{
			ft_putc(*(str + i), len);
			i++;
		}
	}
}
