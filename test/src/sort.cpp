#include "gtest/gtest.h"

extern "C"
{
#include "ft_algorithms.h"
#include "ft_predicates.h"
};

TEST(IsSorted, NotSorted)
{
    int array[] = {1, 4, 5, 7, 23, 4, 6, 3, 4, 6, 3};
    size_t array_size = sizeof(array) / sizeof(int);

    ASSERT_EQ(false,
              is_sorted({array, array_size, sizeof(int)}, &less_equal_int));
    ASSERT_EQ(false,
              is_sorted({array, array_size, sizeof(int)}, &greater_equal_int));
}

TEST(IsSorted, Sorted)
{
    int array[] = {1, 2, 3, 4, 5};
    size_t array_size = sizeof(array) / sizeof(int);

    ASSERT_EQ(true,
              is_sorted({array, array_size, sizeof(int)}, &less_equal_int));
    ASSERT_EQ(false,
              is_sorted({array, array_size, sizeof(int)}, &greater_equal_int));
}

TEST(IsSorted, SortedBackward)
{
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    size_t array_size = sizeof(array) / sizeof(int);

    ASSERT_EQ(false,
              is_sorted({array, array_size, sizeof(int)}, &less_equal_int));
    ASSERT_EQ(true,
              is_sorted({array, array_size, sizeof(int)}, &greater_equal_int));
}
