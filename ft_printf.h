/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodro <rodro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:35:22 by rodro             #+#    #+#             */
/*   Updated: 2023/02/21 20:47:46 by rodro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* LIBRERIAS */
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

/* FUNCIONES */
int	ft_strlen(const char *str);
int	ft_putchr(const char c);
int	ft_putstr(const char *str);
int	ft_putnbr_base(unsigned long int nbr, char *base);
int	ft_putnbr(int nbr, char *b, char c);
int	ft_unsig_putnbr_base(unsigned long int nbr, char *base);

#endif
