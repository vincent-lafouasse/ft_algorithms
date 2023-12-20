/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithms.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:31:31 by poss              #+#    #+#             */
/*   Updated: 2023/12/20 17:49:20 by poss             ###   ########.fr       */
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

bool		all(const t_array array, t_unary_predicate pred);
bool		any(const t_array array, t_unary_predicate pred);
bool		none(const t_array array, t_unary_predicate pred);

void		map(t_array array, void (*transform)(void *));
void		map_copy(t_array src, void *dest, void (*transform)(void *));

#endif
