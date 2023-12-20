/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:00:37 by poss              #+#    #+#             */
/*   Updated: 2023/12/20 18:47:37 by poss             ###   ########.fr       */
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
    size_t array_size = sizeof(array) / sizeof(int);

    map({array, array_size, sizeof(int)}, &abs_int);
    int expected1[] = {1, 2, 3, 4};
    assert_int_array_equality(array, expected1, array_size);

    map({array, array_size, sizeof(int)}, &square_int);
    int expected2[] = {1, 4, 9, 16};
    assert_int_array_equality(array, expected2, array_size);
}

TEST(MapCopy, SquareIntArray)
{
    const int src[] = {-1, 2, -3, 4};
    const size_t array_size = sizeof(src) / sizeof(int);

    int* dest1 = static_cast<int*>(malloc(sizeof(int) * array_size));
    map_copy({(void*)src, array_size, sizeof(int)}, dest1, &abs_int);
    int expected1[] = {1, 2, 3, 4};
    assert_int_array_equality(dest1, expected1, array_size);

    int* dest2 = static_cast<int*>(malloc(sizeof(int) * array_size));
    map_copy({(void*)dest1, array_size, sizeof(int)}, dest2, &square_int);
    int expected2[] = {1, 4, 9, 16};
    assert_int_array_equality(dest2, expected2, array_size);
}
