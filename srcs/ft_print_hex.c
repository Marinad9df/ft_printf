/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:30:42 by marigon2          #+#    #+#             */
/*   Updated: 2024/08/03 20:43:20 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long ptr, char format)
{
	char			*hex_base;
	unsigned int	value;
	int				count;
	unsigned int	base_length;

	if (format == 'x')
		hex_base = "0123456789abcdef";
	else
		hex_base = "0123456789ABCDEF";
	if (ptr == 0)
	{
		return (ft_putstr("(nil)"));
	}
	count = 0;
	value = (unsigned int)ptr;
	base_length = ft_strlen(hex_base);
	if (value >= base_length)
		count += ft_print_hex(value / base_length, format);
	count += ft_putchar(hex_base[value % base_length]);
	return (count);
}
