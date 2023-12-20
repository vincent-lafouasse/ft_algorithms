/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithms.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:31:31 by poss              #+#    #+#             */
/*   Updated: 2023/12/20 16:27:50 by poss             ###   ########.fr       */
/*   Updated: 2023/12/15 20:48:19 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALGORITHMS_H
# define FT_ALGORITHMS_H

# include "ft_predicates.h"
# include <stddef.h>

bool	is_sorted(const void *start, const void *end,
			t_binary_predicate less_equal, size_t element_size);

bool	all(const void *start, const void *end, t_unary_predicate pred,
			size_t element_size);
bool	any(const void *start, const void *end, t_unary_predicate pred,
			size_t element_size);
bool	none(const void *start, const void *end, t_unary_predicate pred,
			size_t element_size);

void	map(void *start, void *end, void (*transform)(void *),
			size_t element_size);

#endif
