/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivas-q <arivas-q@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:49:09 by arivas-q          #+#    #+#             */
/*   Updated: 2024/09/24 13:47:27 by arivas-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>

size_t	strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
    size_t  i;

	i = 0;
	srclen = ft_srtlen(src);
	destlen = ft_srtlen(dest);
	if (size <= destlen)
		return (size + srclen);
	while (src[i] && (destlen + i) < (size - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
