/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_any_none.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:04:50 by poss              #+#    #+#             */
/*   Updated: 2023/12/19 21:13:48 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"

bool	all(const void *start, const void *end,
		bool (*pred)(const void *element), size_t element_size)
{
	unsigned char	*current;

	current = (unsigned char *)start;
	while (current < (const unsigned char *)end)
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
	unsigned char	*current;

	current = (unsigned char *)start;
	while (current < (const unsigned char *)end)
	{
		if (!(*pred)(current))
			return (false);
		current += element_size;
	}
	return (true);
}
bool	none(const void *start, const void *end,
		bool (*pred)(const void *element), size_t element_size)
{
	unsigned char	*current;

	current = (unsigned char *)start;
	while (current < (const unsigned char *)end)
	{
		if (!(*pred)(current))
			return (false);
		current += element_size;
	}
	return (true);
}
