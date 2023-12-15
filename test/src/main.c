/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:31:09 by poss              #+#    #+#             */
/*   Updated: 2023/12/15 18:31:10 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_vector.h"
#include "unity.h"

#include <stdio.h>

void setUp(void) {}

void tearDown(void) {}

void run_test_constructor(void);

int main(void)
{
    UnityBegin("Vector");
    run_test_constructor();
    return (UnityEnd());
}
