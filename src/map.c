/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:43:38 by poss              #+#    #+#             */
/*   Updated: 2023/12/20 17:06:47 by poss             ###   ########.fr       */
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
	const t_byte	*p_read;
	t_byte			*p_write;

	p_read = start;
	p_write = dest;
	while (p_read < (const t_byte *)end)
	{
		memcpy(p_write, p_read, element_size);
		(*transform)(p_write);
		p_write += element_size;
		p_read += element_size;
	}
}
