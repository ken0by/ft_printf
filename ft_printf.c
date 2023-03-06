/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofuente <rofuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:18:03 by rofuente          #+#    #+#             */
/*   Updated: 2023/03/06 16:56:51 by rofuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchr(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (write(1, "0x", 2) + ft_putnbr_base
			(va_arg(args, unsigned long int), "0123456789abcdef"));
	else if (c == 'd')
		return (ft_putnbr(va_arg(args, int), "0123456789", c));
	else if (c == 'i')
		return (ft_putnbr(va_arg(args, int), "0123456789", c));
	else if (c == 'u')
		return (ft_upn_base(va_arg(args, int), "0123456789"));
	else if (c == 'x')
		return (ft_upn_base(va_arg(args, int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_upn_base(va_arg(args, int), "0123456789ABCDEF"));
	else if (c == '%')
		return (ft_putchr('%'));
	else
		return (ft_putchr(c));
	return (0);
}

int	ft_printf(char const *str, ...)
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
				j += ft_type(args, str[i + 1]);
			i++;
		}
		else
			j += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (j);
}

/* int	main(void)
{
	ft_printf("%c%c", 'x', '\n');
	return (0);
} */
