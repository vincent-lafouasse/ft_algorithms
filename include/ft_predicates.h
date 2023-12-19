/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_predicates.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:01:37 by poss              #+#    #+#             */
/*   Updated: 2023/12/19 20:14:47 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PREDICATES_H
# define FT_PREDICATES_H

# include <stdbool.h>

typedef bool	(*t_unary_predicate)(const void *);
typedef bool	(*t_binary_predicate)(const void *, const void *);
typedef int		(*t_comparison)(const void *, const void *);

bool			less_equal_int(const void *, const void *);
bool			less_int(const void *, const void *);
bool			greater_equal_int(const void *, const void *);
bool			greater_int(const void *, const void *);
bool			equal_int(const void *, const void *);
bool			not_equal_int(const void *, const void *);

#endif
