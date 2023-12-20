/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:43:38 by poss              #+#    #+#             */
/*   Updated: 2023/12/20 17:53:57 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"
#include <string.h>

typedef unsigned char	t_byte;

static void	*offset(void *p, size_t sz)
{
	return ((t_byte *)p + sz);
}

void	map(t_array array, void (*transform)(void *))
{
	size_t	i;

	i = 0;
	while (i < array.size * array.element_size)
	{
		(*transform)(offset(array.data, i));
		i += array.element_size;
	}
}

void	map_copy(t_array src, void *dest, void (*transform)(void *))
{
	size_t	i;

	i = 0;
	while (i < src.size * src.element_size)
	{
		memcpy(offset(dest, i), offset(src.data, i), src.element_size);
		(*transform)(offset(dest, i));
		i += src.element_size;
	}
}
