/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:44:42 by poss              #+#    #+#             */
/*   Updated: 2023/12/20 00:57:50 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"

typedef unsigned char	t_byte;

bool	is_sorted(const void *start, const void *end,
		t_binary_predicate less_equal, size_t element_size)
{
	const t_byte	*current;

	current = start;
	while ((current + element_size) < (const t_byte *)end)
	{
		if (!(*less_equal)(current, current + element_size))
			return (false);
		current += element_size;
	}
	return (true);
}
