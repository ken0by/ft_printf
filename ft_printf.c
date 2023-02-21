/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodro <rodro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:34:51 by rodro             #+#    #+#             */
/*   Updated: 2023/02/21 17:08:18 by rodro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conv(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchr(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putchr());
	else if (c == 'd')
		return (ft_putchr());
	else if (c == 'i')
		return (ft_putchr());
	else if (c == 'u')
		return (ft_putchr());
	else if (c == 'x')
		return (ft_putchr());
	else if (c == 'X')
		return (ft_putchr());
	else if (c == '%')
		return (ft_putchr());
	else
		return (ft_putchr(c));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (ft_strlen(str) > i + 1)
				j += ft_conv(args, str[i + 1]);
		}
		else
			j += write(1, &str[i], 1);
		i++;
	}
}
