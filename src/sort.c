/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:44:42 by poss              #+#    #+#             */
/*   Updated: 2023/12/20 17:26:56 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"

typedef unsigned char	t_byte;

bool	is_sorted(const t_array array, t_binary_predicate less_equal)
{
	size_t	byte_index;

	byte_index = 0;
	while (byte_index < (array.size - 1) * array.element_size)
	{
		if (!(*less_equal)((const t_byte *)array.data + byte_index,
				(const t_byte *)array.data + byte_index + array.element_size))
			return (false);
		byte_index += array.element_size;
	}
	return (true);
}
