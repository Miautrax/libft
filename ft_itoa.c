/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivas-q <arivas-q@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:16:54 by arivas-q          #+#    #+#             */
/*   Updated: 2025/01/20 11:57:23 by arivas-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_n_count(int n)
{
	size_t	i;
	
	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n != 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}
static char	*itoa_body(char *str, char sign, int n)
{
	size_t	n_count;
	size_t	i;
	
	n_count = get_n_count(n);
	str = malloc (sizeof(char) * (n_count + 1));
	if (!str)
		return (0);
	str[n_count] = '\0';
	i = n_count - 1;
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	while (n > 0)
	{
		str[i--] = n % 10 + '0';
		n = n / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
char	*ft_itoa (int n)
{
	char	*str;
	char	sign;
	
	str = NULL;
	sign = 1;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = itoa_body(str, sign, n);
	return (str);
}