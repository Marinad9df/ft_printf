/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marigon2 <marigon2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 08:42:40 by marigon2          #+#    #+#             */
/*   Updated: 2024/04/05 03:16:50 by marigon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;	

	i = 0;
	while (src[i])
		i++;
	if (!dstsize)
		return (i);
	while (--dstsize != 0 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (i);
}
