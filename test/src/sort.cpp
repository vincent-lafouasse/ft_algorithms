#include "gtest/gtest.h"

extern "C"
{
#include "ft_algorithms.h"
#include "ft_predicates.h"
};

TEST(Sorts, IsSorted_NotSorted)
{
    int array1[] = {1, 4, 5, 7, 23, 4, 6, 3, 4, 6, 3};
    int array_size = sizeof(array1) / sizeof(int);

    ASSERT_EQ(false,
              is_sorted(array1, array_size, &less_equal_int, sizeof(*array1)));
    ASSERT_EQ(false, is_sorted(array1, array_size, &greater_equal_int,
                               sizeof(*array1)));
}

TEST(Sorts, IsSorted_Sorted)
{
    int array1[] = {1, 2, 3, 4, 5};
    int array_size = sizeof(array1) / sizeof(int);

    ASSERT_EQ(true,
              is_sorted(array1, array_size, &less_equal_int, sizeof(*array1)));
    ASSERT_EQ(false, is_sorted(array1, array_size, &greater_equal_int,
                               sizeof(*array1)));
}

TEST(Sorts, IsSorted_SortedBackward)
{
    int array1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int array_size = sizeof(array1) / sizeof(int);

    ASSERT_EQ(false,
              is_sorted(array1, array_size, &less_equal_int, sizeof(*array1)));
    ASSERT_EQ(true, is_sorted(array1, array_size, &greater_equal_int,
                              sizeof(*array1)));
}
