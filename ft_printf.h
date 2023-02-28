/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodro <rodro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:04:11 by rodro             #+#    #+#             */
/*   Updated: 2023/02/28 18:00:46 by rodro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* LIBRERIAS */
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

/* FUNCIONES */
int	ft_printf(char const *str, ...);
int	ft_strlen(const char *str);
int	ft_putchr(const char c);
int	ft_putstr(const char *str);
int	ft_putnbr(int nbr, char *base, char c);
int	ft_putnbr_base(unsigned long int nbr, char *base);
int	ft_upn_base(unsigned long int nbr, char *base);

#endif
