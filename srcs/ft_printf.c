/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:32:43 by marigon2          #+#    #+#             */
/*   Updated: 2024/08/03 20:45:05 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	void	*ptr;

	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr)
			return (ft_putaddress(ptr));
		return (ft_putstr("(nil)"));
	}
	else if (format == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (format == 'X' || format == 'x')
		return (ft_print_hex(va_arg(args, int), format));
	else if (format == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *format_str, ...)
{
	va_list	args;
	int		index;
	int		total_length;

	if (!format_str)
		return (-1);
	index = 0;
	total_length = 0;
	va_start(args, format_str);
	while (format_str[index])
	{
		if (format_str[index] == '%'
			&& ft_strchr("cspdiuxX%", format_str[index + 1]))
		{
			total_length += ft_format(args, format_str[index + 1]);
			index++;
		}
		else
			total_length += ft_putchar(format_str[index]);
		index++;
	}
	va_end(args);
	return (total_length);
}

/*
int main(void)
{
	void	*address;
	char	message[] = "Hello, World!";

	address = message;
	ft_printf("%d\n", ft_printf("\001\002\007\v\010\f\r\n"));

	ft_printf("\n=== Custom Output ===\n");
	ft_printf("Pointer address: %p\n", address);
	ft_printf("String: %s\n", message);
	ft_printf("Decimal: %d\n", 42);
	ft_printf("Hexadecimal: %x\n", 255);
	
	return (0);
}
*/
