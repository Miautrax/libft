/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivas-q <arivas-q@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:19:57 by arivas-q          #+#    #+#             */
/*   Updated: 2024/09/24 15:00:20 by arivas-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	char	*lastchr;

	lastchr = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			lastchr = (char *)s;
		s++;
	}
	if (c == '\0')
		return (char *)s;
	return (lastchr);
}
