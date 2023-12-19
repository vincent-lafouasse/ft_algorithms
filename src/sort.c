/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:44:42 by poss              #+#    #+#             */
/*   Updated: 2023/12/19 20:59:07 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"

bool	is_sorted(const void *start, const void *end,
		t_binary_predicate less_equal, size_t element_size)
{
	const unsigned char	*current;

	current = start;
	while ((current + element_size) < (const unsigned char *)end)
	{
		if (!(*less_equal)(current, current + element_size))
			return (false);
		current += element_size;
	}
	return (true);
}
