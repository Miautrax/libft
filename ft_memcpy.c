/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivas-q <arivas-q@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:49:07 by arivas-q          #+#    #+#             */
/*   Updated: 2024/09/17 17:44:48 by arivas-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d;
    const char *s;

    d = (char *)dest;
    s = (const char *)src;

    while (n--)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
}