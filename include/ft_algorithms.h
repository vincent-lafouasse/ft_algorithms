/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithms.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:31:31 by poss              #+#    #+#             */
/*   Updated: 2023/12/19 19:44:45 by poss             ###   ########.fr       */
/*   Updated: 2023/12/15 20:48:19 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALGORITHMS_H
# define FT_ALGORITHMS_H

# include <stdbool.h>
# include <stddef.h>

typedef bool	(*t_unary_predicate)(const void *);
typedef bool	(*t_binary_predicate)(const void *, const void *);
typedef int		(*t_comparison)(const void *, const void *);

bool			is_sorted(const void *array, size_t size, t_comparison compare,
					size_t element_size);

#endif
