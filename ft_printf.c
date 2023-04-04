/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 04:04:32 by hkoutar-          #+#    #+#             */
/*   Updated: 2023/01/28 04:23:17 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_arguments(char c, va_list args, int *len)
{
	if (c == '%')
		ft_putc('%', len);
	else if (c == 'c')
		ft_putc(va_arg(args, int), len);
	else if (c == 's')
		ft_puts(va_arg(args, char *), len);
	else if (c == 'd' || c == 'i')
		ft_putdec(va_arg(args, int), len);
	else if (c == 'x' || c == 'X')
		ft_puthex(va_arg(args, unsigned int), len, c);
	else if (c == 'u')
		ft_putunsdec(va_arg(args, unsigned int), len);
	else if (c == 'p')
		ft_pointer(va_arg(args, void *), len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (*(format + i))
	{
		if (*(format + i) != '%')
			ft_putc(*(format + i), &len);
		else
		{
			i++;
			ft_arguments(*(format + i), args, &len);
		}
		i++;
	}
	va_end(args);
	return (len);
}
