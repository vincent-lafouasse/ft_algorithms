#include "gtest/gtest.h"

extern "C"
{
#include "ft_algorithms.h"
#include "ft_predicates.h"
};

TEST(Sorts, IsSorted)
{
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int array_size = sizeof(array) / sizeof(int);

    ASSERT_EQ(false,
              is_sorted(array, array_size, &less_equal_int, sizeof(*array)));
    ASSERT_EQ(true,
              is_sorted(array, array_size, &greater_equal_int, sizeof(*array)));
}
