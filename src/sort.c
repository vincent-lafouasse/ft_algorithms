/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:44:42 by poss              #+#    #+#             */
/*   Updated: 2023/12/17 14:04:13 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"

bool	is_sorted(void *array, size_t size, size_t element_size,
		int (*compare)(void *, void *))
{
	size_t i;
	unsigned char* bytes = array;

	i = 0;
	while (i < size - 1)
	{
		if ((*compare)(bytes + (i * element_size), bytes + (i * element_size) + 1) > 0)
			return false;
		++i;
	}
	return true;
}
