/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:44:42 by poss              #+#    #+#             */
/*   Updated: 2023/12/19 18:11:03 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"

bool	is_sorted(void *array, size_t size, size_t element_size,
		int (*compare)(void *, void *))
{
	unsigned char	*bytes;

	bytes = array;
	while (size > 1)
	{
		if ((*compare)(bytes, bytes + element_size) > 0)
			return (false);
		--size;
		bytes += element_size;
	}
	return (true);
}
