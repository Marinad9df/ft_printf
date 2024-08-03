/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:34:28 by marigon2          #+#    #+#             */
/*   Updated: 2024/07/28 19:34:28 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char const *s)
{
	int	result;

	result = 0;
	if (!s)
		return (write(1, "(nil)", 5));
	while (*s)
		result += ft_putchar(*s++);
	return (result);
}
/*
int main()
{
	ft_putstr("oleoleloscaracole");
	return 0;
}*/
