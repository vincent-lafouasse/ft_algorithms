#include "gtest/gtest.h"

#include <vector>

extern "C"
{
#include "ft_algorithms.h"
};

int int_compare_C_style(void* int1, void* int2)
{
    int __int1 = *(int*)int1;
    int __int2 = *(int*)int2;

    if (__int1 < __int2)
        return -1;
    if (__int1 > __int2)
        return 1;
    return 0;
}

TEST(Sorts, IsSorted)
{
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int array_size = sizeof(array) / sizeof(int);
    std::vector<int> array__{array, array + array_size};

    bool expected = std::is_sorted(array__.cbegin(), array__.cend());
    bool actual =
        is_sorted(array, array_size, &int_compare_C_style, sizeof(*array));

    ASSERT_EQ(expected, actual)
        << "Error, expected " << expected << " was " << actual << '\n';
}
