#include "gtest/gtest.h"

#include <vector>

extern "C"
{
#include "ft_algorithms.h"
#include "ft_predicates.h"
};

TEST(Sorts, IsSorted)
{
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int array_size = sizeof(array) / sizeof(int);
    std::vector<int> array__{array, array + array_size};

    bool expected = std::is_sorted(array__.cbegin(), array__.cend());
    bool actual = is_sorted(array, array_size, &less_equal_int, sizeof(*array));

    ASSERT_EQ(expected, actual)
        << "Error, expected " << expected << " was " << actual << '\n';
}
