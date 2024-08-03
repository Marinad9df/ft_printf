/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:29:00 by marigon2          #+#    #+#             */
/*   Updated: 2024/08/03 20:46:19 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <stdarg.h>
# include "../libft/inc/libft.h"

long	ft_absolute(long n);
int		ft_putchar(int c);
int		ft_putnbr(int n);
int		ft_printf(const char *str, ...);
void	ft_putbase_fd(int nbr, const char *base, int fd);
int		ft_print_hex(unsigned long n, char format);
int		ft_putstr(char const *s);
int		ft_putunsigned(unsigned long n);
int		ft_putaddress(void *format);

#endif
