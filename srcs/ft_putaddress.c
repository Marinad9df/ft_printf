/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:32:07 by marigon2          #+#    #+#             */
/*   Updated: 2024/08/03 20:42:14 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbrlen(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_print_hex(unsigned long n, char format)
{
	if (n >= 16)
	{
		ft_print_hex(n / 16, format);
	}
	if (format == 'x')
	{
		write(1, &"0123456789abcdef"[n % 16], 1);
	}
	else if (format == 'X')
	{
		write(1, &"0123456789ABCDEF"[n % 16], 1);
	}
	return (ft_nbrlen(n));
}

int	ft_putaddress(void *address)
{
	unsigned long	addr;

	addr = (unsigned long)address;
	write(1, "0x", 2);
	return (2 + ft_print_hex(addr, 'x'));
}
