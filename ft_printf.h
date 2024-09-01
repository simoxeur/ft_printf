/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtalbi <mtalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 10:44:22 by mtalbi            #+#    #+#             */
/*   Updated: 2023/12/13 18:09:12 by mtalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int			ft_printf(const char *format, ...);
int			ft_printchar(char c);
int			ft_printstr(char *str);
int			ft_printnbr(int n);
void		ft_puthex(unsigned int n, char *base);
int			ft_hexlenght(unsigned int n);
void		ft_puthex_ptr(unsigned long n, char *base);
int			ft_hexlenght_ptr(unsigned long n);
int			ft_printunsigned(unsigned int n);
int			ft_printhex(int n, char *base);
int			ft_printptr(void *ptr);

#endif