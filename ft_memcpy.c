/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivas-q <arivas-q@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:49:07 by arivas-q          #+#    #+#             */
/*   Updated: 2025/01/30 08:42:21 by arivas-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dest || !src)
		return (NULL)
	d = (char *)dest;
	s = (const char *)src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
