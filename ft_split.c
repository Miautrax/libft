/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivas-q <arivas-q@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:17:09 by arivas-q          #+#    #+#             */
/*   Updated: 2024/11/26 20:46:01 by arivas-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	word_count(char const *s, char c)
{
	int		i;
	int		count;
	
	while (s[i])
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

int		ABC(char const *s, char c, int j)
{
	int		i;

	i = 0;
	while(s[j])
	{
		if(s[j] != c)
		{
			i++;
			if(s[j + 1] == c)
				return (i);
		}
		j++;
	}
	return (i);
}

void	freestr (char **str)
{
	int		i;
	
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		word_count;
	int		i;
	int		j;
	int		n;

	word_count = 0;
	i = 0;
	word_count = word_count(s, c);
	str = malloc(sizeof(char*) * (word_count + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		while(s[i] == c)
			i++;
		n = (s, c, i)
		if(n > 0)
		{
			str[j] = ft_substr(s, i, n);
			if (!str[j])
				freestr(str);
			j++;
		}
		i = i + n;
	}
	str[j] = NULL;
	return (&*str);
}