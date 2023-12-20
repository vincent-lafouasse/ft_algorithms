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
    int data[] = {1, 4, 5, 7, 23, 0, 6, 3, 4, 6, 3};
    size_t data_size = sizeof(data) / sizeof(*data);
    t_array array = {data, data_size, sizeof(*data)};

    ASSERT_TRUE(all(array, &is_positive));
    ASSERT_FALSE(all(array, &is_strictly_positive));
    ASSERT_FALSE(all(array, &is_even));
}

TEST(AllAnyNone, Any)
{
    int data[] = {-3, -7, 5, 45};
    size_t data_size = sizeof(data) / sizeof(*data);
    t_array array = {data, data_size, sizeof(*data)};

    ASSERT_TRUE(any(array, &is_positive));
    ASSERT_TRUE(any(array, &is_strictly_positive));
    ASSERT_FALSE(any(array, &is_even));
}

TEST(AllAnyNone, None)
{
    int data[] = {-3, -7, 0};
    size_t data_size = sizeof(data) / sizeof(*data);
    t_array array = {data, data_size, sizeof(*data)};

    ASSERT_FALSE(none(array, &is_positive));
    ASSERT_TRUE(none(array, &is_strictly_positive));
    ASSERT_FALSE(none(array, &is_even));
}
