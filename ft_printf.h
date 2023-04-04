/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkoutar- <hkoutar-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 03:55:50 by hkoutar-          #+#    #+#             */
/*   Updated: 2023/01/28 04:00:23 by hkoutar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char	*format, ...);
void	ft_arguments(char c, va_list args, int *len);
void	ft_putc(char c, int *len);
void	ft_puts(char *str, int *len);
void	ft_putdec(int num, int *len);
void	ft_puthex(unsigned int num, int *len, char c);
void	ft_putunsdec(unsigned int num, int *len);
void	ft_pointer(void *ptr, int *len);
void	ft_point(unsigned long ptr, int *len);

#endif
