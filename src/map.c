/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:43:38 by poss              #+#    #+#             */
/*   Updated: 2023/12/20 16:33:24 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"

typedef unsigned char	t_byte;

void	map(void *start, void *end, void (*transform)(void *element),
		size_t element_size)
{
	t_byte	*current;

	current = start;
	while (current < (t_byte *)end)
	{
		current += element_size;
	}
}
