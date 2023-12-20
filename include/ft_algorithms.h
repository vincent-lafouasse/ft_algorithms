/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithms.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:31:31 by poss              #+#    #+#             */
/*   Updated: 2023/12/20 17:20:54 by poss             ###   ########.fr       */
/*   Updated: 2023/12/15 20:48:19 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALGORITHMS_H
# define FT_ALGORITHMS_H

# include "ft_predicates.h"
# include <stddef.h>

typedef struct
{
	void	*data;
	size_t	size;
	size_t	element_size;
}			t_array;

bool		is_sorted(const t_array array, t_binary_predicate less_equal);

bool		all(const void *start, const void *end, t_unary_predicate pred,
				size_t element_size);
bool		any(const void *start, const void *end, t_unary_predicate pred,
				size_t element_size);
bool		none(const void *start, const void *end, t_unary_predicate pred,
				size_t element_size);

void		map(void *start, void *end, void (*transform)(void *),
				size_t element_size);
void		map_copy(const void *start, const void *end, void *dest,
				void (*transform)(void *), size_t element_size);

#endif
