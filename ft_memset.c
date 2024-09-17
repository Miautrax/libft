/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivas-q <arivas-q@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:14:02 by arivas-q          #+#    #+#             */
/*   Updated: 2024/09/17 17:48:04 by arivas-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *p;
    unsigned char   value;

    p = (unsigned char *)s;
    value = (unsigned char)c;

    while (n)
    {
        *p = value;
        p++;
        n--;
    }
    return (s);
}