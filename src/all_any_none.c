/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_any_none.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:04:50 by poss              #+#    #+#             */
/*   Updated: 2023/12/20 02:30:14 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"

typedef unsigned char	t_byte;

bool	all(const void *start, const void *end,
		bool (*pred)(const void *element), size_t element_size)
{
	const t_byte	*current;

	current = (const t_byte *)start;
	while (current < (const t_byte *)end)
	{
		if (!(*pred)(current))
			return (false);
		current += element_size;
	}
	return (true);
}

bool	any(const void *start, const void *end,
		bool (*pred)(const void *element), size_t element_size)
{
	const t_byte	*current;

	current = (const t_byte *)start;
	while (current < (const t_byte *)end)
	{
		if ((*pred)(current))
			return (true);
		current += element_size;
	}
	return (false);
}
bool	none(const void *start, const void *end,
		bool (*pred)(const void *element), size_t element_size)
{
	return (!any(start, end, pred, element_size));
}
