/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:07:09 by poss              #+#    #+#             */
/*   Updated: 2023/12/19 20:15:21 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_predicates.h"

bool	less_equal_int(const void *int1, const void *int2)
{
	return (*(int *)int1 <= *(int *)int2);
}

bool	greater_equal_int(const void *int1, const void *int2)
{
	return (*(int *)int1 >= *(int *)int2);
}

bool	less_int(const void *int1, const void *int2)
{
	return (*(int *)int1 < *(int *)int2);
}

bool	greater_int(const void *int1, const void *int2)
{
	return (*(int *)int1 > *(int *)int2);
}
