/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtalbi <mtalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:02:53 by mtalbi            #+#    #+#             */
/*   Updated: 2023/12/14 10:16:25 by mtalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *ptr)
{
	unsigned long	n;
	char			*base;

	base = "0123456789abcdef";
	n = (unsigned long)ptr;
	ft_printstr("0x");
	if (n == 0)
	{
		ft_printchar('0');
		return (3);
	}
	else
		ft_puthex_ptr(n, base);
	return (ft_hexlenght_ptr(n) + 2);
}
