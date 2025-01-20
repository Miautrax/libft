/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivas-q <arivas-q@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:17:21 by arivas-q          #+#    #+#             */
/*   Updated: 2025/01/20 13:22:44 by arivas-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstrim(char const *s)
{
    size_t  start;
    size_t  end;
    size_t  len;
    char    *str;

    if (!s)
		return (NULL);
    start = 0;
    while (s[start] && (s[start] == ' ' || s[start] == '\t' || s[start] == '\n'))
		start++;
    if (s[start] == '\0')
		return (ft_strdup(""));
    end = ft_strlen(s) - 1;
    while (end > start && (s[end] == ' ' || s[end] == '\t' || s[end] == '\n'))
		end--;
    len = end - start + 1;
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
		return (NULL);
    ft_strlcpy(str, s + start, len + 1);

    return (str);
}
