/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodro <rodro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:23:51 by rodro             #+#    #+#             */
/*   Updated: 2023/02/28 17:41:34 by rodro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr, char *base, char c)
{
	int				i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	len = ft_strlen(base);
	if (nbr < 0)
	{
		if (c != 'u')
			i += write(1, "-", 1);
		nbr *= -1;
	}
	j = nbr;
	if (j >= len)
		i += ft_putnbr(j / len, base, c);
	i += ft_putchr(base[j % len]);
	return (i);
}

int	ft_putnbr_base(unsigned long int nbr, char *base)
{
	int				i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(base);
	if (nbr >= len)
		i += ft_putnbr_base(nbr / len, base);
	i += ft_putchr(base[nbr % len]);
	return (i);
}

int	ft_upn_base(unsigned long int nbr, char *base)
{
	int				i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	len = ft_strlen(base);
	j = nbr;
	if (j >= len)
		i += ft_upn_base(j / len, base);
	i += ft_putchr(base[j % len]);
	return (i);
}
