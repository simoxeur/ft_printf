/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtalbi <mtalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:29:52 by mtalbi            #+#    #+#             */
/*   Updated: 2023/12/13 16:45:13 by mtalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		count += ft_printchar('-');
		n = -n;
	}
	if (n > 9)
	{
		count += ft_printnbr(n / 10);
	}
	if (n <= 9)
	{
		count += ft_printchar(n + 48);
		return (count);
	}
	count += ft_printchar((n % 10) + 48);
	return (count);
}

int	ft_printunsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_printunsigned(n / 10);
	if (n <= 9)
	{
		count += ft_printchar(n + 48);
		return (count);
	}
	count += ft_printchar((n % 10) + 48);
	return (count);
}
