/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtalbi <mtalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:36:09 by mtalbi            #+#    #+#             */
/*   Updated: 2023/12/14 10:29:01 by mtalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, char *base)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, base);
		ft_puthex(n % 16, base);
	}
	else
		ft_printchar(base[n]);
}

int	ft_hexlenght(unsigned int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

void	ft_puthex_ptr(unsigned long n, char *base)
{
	if (n >= 16)
	{
		ft_puthex_ptr(n / 16, base);
		ft_puthex_ptr(n % 16, base);
	}
	else
		ft_printchar(base[n]);
}

int	ft_hexlenght_ptr(unsigned long n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}
