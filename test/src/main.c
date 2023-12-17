/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:31:09 by poss              #+#    #+#             */
/*   Updated: 2023/12/17 13:58:22 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"
#include "unity.h"

#include <stdio.h>

void setUp(void) {}

void tearDown(void) {}

void run_test_is_sorted(void);

int main(void)
{
    UnityBegin("Vector");
    run_test_is_sorted();
    return (UnityEnd());
}
