/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodro <rodro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:17:29 by rofuente          #+#    #+#             */
/*   Updated: 2023/03/03 10:12:13 by rodro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

/* LIBRERIAS */
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

/* FUNCIONES */
int		ft_printf(char const *str, ...);
int		ft_strlen(const char *str);
int		ft_putchr(const char c);
int		ft_putstr(const char *str);
int		ft_putnbr(int nbr, char *base, char c);
int		ft_putnbr_base(unsigned long int nbr, char *base);
int		ft_upn_base(unsigned long int nbr, char *base);
char	*ft_strdup(const char *s1);

#endif
