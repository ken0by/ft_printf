/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofuente <rofuente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:16:29 by rofuente          #+#    #+#             */
/*   Updated: 2023/03/06 16:11:56 by rofuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

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

int	wtf(char const *str, int i, int j, va_list args)
{
	int	k;

	k = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] >= 0 && str[i] <= 9)
			{
				while (k < (int) str[i])
					k += write(1, " ", 1);
			}
			i ++;
			if (ft_strlen(str) > i)
				j += ft_type(args, str[i]);
		}
		else
			j += ft_type(args, str[i]);
		i++;
	}
	return (j);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, str);
	j += wtf(str, i, j, args);
	va_end(args);
	return (j);
}

/* int	main(void)
{
	ft_printf("%1c, %1c, %1c", '5', 'x', '\n');
	printf("%1c, %1c, %1c", '5', 'x', '\n');
	return (0);
} */
