/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtalbi <mtalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:35:01 by mtalbi            #+#    #+#             */
/*   Updated: 2023/12/14 10:10:10 by mtalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(int n, char *base)
{
	int	printed;

	printed = 0;
	if (*base == 'x')
		base = "0123456789abcdef";
	else if (*base == 'X')
		base = "0123456789ABCDEF";
	if (n == 0)
	{
		ft_printchar('0');
		return (1);
	}
	ft_puthex(n, base);
	return (printed = ft_hexlenght(n));
}
