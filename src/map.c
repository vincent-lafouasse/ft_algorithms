/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:43:38 by poss              #+#    #+#             */
/*   Updated: 2023/12/20 16:58:48 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"
#include <string.h>

typedef unsigned char	t_byte;

void	map(void *start, void *end, void (*transform)(void *element),
		size_t element_size)
{
	t_byte	*current;

	current = start;
	while (current < (t_byte *)end)
	{
		(*transform)(current);
		current += element_size;
	}
}

void	map_copy(const void *start, const void *end, void *dest,
		void (*transform)(void *), size_t element_size)
{
	bzero(dest, (size_t)((const t_byte *)end - (const t_byte *)start));
}
