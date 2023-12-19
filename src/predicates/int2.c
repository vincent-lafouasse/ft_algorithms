/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:15:41 by poss              #+#    #+#             */
/*   Updated: 2023/12/19 20:17:05 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_predicates.h"

bool	equal_int(const void *int1, const void *int2)
{
	return (*(int *)int1 == *(int *)int2);
}

bool	not_equal_int(const void *int1, const void *int2)
{
	return (*(int *)int1 != *(int *)int2);
}
