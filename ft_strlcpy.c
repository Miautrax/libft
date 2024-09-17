/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivas-q <arivas-q@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:38:56 by arivas-q          #+#    #+#             */
/*   Updated: 2024/09/17 18:48:47 by arivas-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    
    if (size == 0)
    {
        while (src[i] != '\0')
            i++;
        return (i);
    }
    
    while (i < size -1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    
    dest[i] = '\0';
    
    while (src[i] != '\0')
        i++;
    return (i);
}
