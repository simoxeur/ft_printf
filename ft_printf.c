/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtalbi <mtalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 10:42:52 by mtalbi            #+#    #+#             */
/*   Updated: 2023/12/14 21:51:59 by mtalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checking(const char str, va_list args)
{
	int	printed;

	printed = 0;
	if (str == 'c')
		printed += ft_printchar(va_arg(args, int));
	else if (str == 's')
		printed += ft_printstr(va_arg(args, char *));
	else if (str == 'p')
		printed += ft_printptr(va_arg(args, void *));
	else if (str == 'd' || str == 'i')
		printed += ft_printnbr(va_arg(args, int));
	else if (str == 'u')
		printed += ft_printunsigned(va_arg(args, unsigned int));
	else if (str == 'x')
		printed += ft_printhex(va_arg(args, int), "x");
	else if (str == 'X')
		printed += ft_printhex(va_arg(args, int), "X");
	else if (str == '%')
		printed += ft_printchar('%');
	else
		printed = ft_printchar(str);
	return (printed);
}

int	ft_printf(const char *str, ...)
{
	int		printed;
	int		i;
	va_list	args;

	printed = 0;
	i = 0;
	if (write(1, "", 0) < 0)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i])
				printed += ft_checking(str[i], args);
			else
				return (printed);
		}
		else
			printed += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (printed);
}
