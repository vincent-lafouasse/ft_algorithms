#include "gtest/gtest.h"

extern "C"
{
#include "ft_algorithms.h"
#include "ft_predicates.h"
};

static bool is_positive(const void* p_int)
{
    return *(int*)p_int >= 0;
}

static bool is_strictly_positive(const void* p_int)
{
    return *(int*)p_int > 0;
}

static bool is_even(const void* p_int)
{
    return *(int*)p_int % 2 == 0;
}

TEST(AllAnyNone, All)
{
    int array[] = {1, 4, 5, 7, 23, 0, 6, 3, 4, 6, 3};
    int array_size = sizeof(array) / sizeof(int);

    ASSERT_EQ(true,
              all(array, array + array_size, &is_positive, sizeof(*array)));
    ASSERT_EQ(false, all(array, array + array_size, &is_strictly_positive,
                         sizeof(*array)));
    ASSERT_EQ(false, all(array, array + array_size, &is_even, sizeof(*array)));
}
