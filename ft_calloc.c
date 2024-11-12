/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivas-q <arivas-q@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:56:08 by arivas-q          #+#    #+#             */
/*   Updated: 2024/11/12 20:10:45 by arivas-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //for malloc//
#include <string.h> //for memset//

void *ft_calloc(size_t count, size_t size)
{
	void	result;
	
	result = malloc(count * size);
	if (result == NULL)
		return (NULL);
	else
	{
		ft_bzero(result, (count * size));
		return (result);
	}
}