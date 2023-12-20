/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:00:37 by poss              #+#    #+#             */
/*   Updated: 2023/12/20 16:32:26 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gtest/gtest.h"

extern "C"
{
#include "ft_algorithms.h"
#include "ft_predicates.h"
};

static void assert_int_array_equality(const int* array1,
                                      const int* array2,
                                      size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        ASSERT_EQ(array1[i], array2[i])
            << "Mismatch found at index " << size << " between values "
            << array1[i] << " and " << array2[i];
    }
}

void square_int(void* pInt)
{
    *(int*)pInt *= *(int*)pInt;
}

void abs_int(void* pInt)
{
    if (*(int*)pInt < 0)
        *(int*)pInt *= -1;
}

TEST(Map, SquareIntArray)
{
    int array[] = {-1, 2, -3, 4};
    int array_size = sizeof(array) / sizeof(int);

    map(array, array + array_size, &abs_int, sizeof(*array));
    int expected1[] = {1, 2, 3, 4};
    assert_int_array_equality(array, expected1, array_size);

    map(array, array + array_size, &square_int, sizeof(*array));
    int expected2[] = {1, 4, 9, 16};
    assert_int_array_equality(array, expected2, array_size);
}
