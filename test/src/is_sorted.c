/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:31:13 by poss              #+#    #+#             */
/*   Updated: 2023/12/17 14:00:34 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algorithms.h"
#include "unity.h"

static const char* show_bool(const bool b)
{
    return b ? "True" : "False";
}

static int int_compare(void* int1, void* int2)
{
    int __int1 = *(int*)int1;
    int __int2 = *(int*)int2;

    if (__int1 < __int2)
        return -1;
    if (__int1 > __int2)
        return 1;
    return 0;
}

static void try_int_array(int* array, size_t size)
{
    bool actual = is_sorted(array, size, sizeof(int), &int_compare);

    bool expected = true;
    for (size_t i = 0; i < size - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            expected = false;
            break;
        }
    }

    char error[100];
    sprintf(error, "Error: expected %s was %s", show_bool(expected),
            show_bool(actual));
    TEST_ASSERT_MESSAGE(actual == expected, error);
}

static void test_int_array_is_sorted(void)
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    try_int_array(arr1, sizeof(arr1) / sizeof(*arr1));
    int arr2[] = {2, 1, 3, 4, 5, 6, 7, 8};
    try_int_array(arr2, sizeof(arr2) / sizeof(*arr2));
}

void run_test_is_sorted(void)
{
    printf("\n----- Sort -----\n");
    RUN_TEST(test_int_array_is_sorted);
}
