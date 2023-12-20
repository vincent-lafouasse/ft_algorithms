/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_any_none.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:04:50 by poss              #+#    #+#             */
/*   Updated: 2023/12/20 17:46:25 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"

typedef unsigned char	t_byte;

bool	all(const t_array array, t_unary_predicate pred)
{
	size_t	i;

	i = 0;
	while (i < array.size * array.element_size)
	{
		if (!(*pred)((const t_byte *)array.data + i))
			return (false);
		i += array.element_size;
	}
	return (true);
}

bool	any(const t_array array, t_unary_predicate pred)
{
	size_t	i;

	i = 0;
	while (i < array.size * array.element_size)
	{
		if ((*pred)((const t_byte *)array.data + i))
			return (true);
		i += array.element_size;
	}
	return (false);
}

bool	none(const t_array array, t_unary_predicate pred)
{
	return (!any(array, pred));
}
