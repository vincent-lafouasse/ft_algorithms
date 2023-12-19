# ft_algorithms

[![run tests](https://github.com/vincent-lafouasse/ft_algorithms/actions/workflows/run_tests.yml/badge.svg)](https://github.com/vincent-lafouasse/ft_algorithms/actions/workflows/run_tests.yml)

a collection of useful algorithms

## Todo

```c
typedef bool (*t_unary_predicate)(void*);
typedef bool (*t_binary_predicate)(void*, void*);
typedef int  (*t_comparison)(void*, void*);
```

- `rotate(void* start, void* end, void* new_start, size_t element_size)`
- `sort(void* start, void* end, t_comparison, size_t element_size)` + stable version
- `partition(void* start, void* end, t_unary_predicate, size_t element_size)` + stable version

- `binary_search(void* start, void* end, t_comparison, size_t element_size)`
- `lower_bound(void* start, void* end, t_comparison, size_t element_size)` + `upper_bound`

- `all`, `any`, `none`: `all(void* start, void* end, int (*predicate)(void*), size_t element_size)`
- `find(void* start, void* end, void* target, size_t element_size)` and `find_if` with argument `t_unary_predicate` instead of value
- `count(void* start, void* end, void* target, size_t element_size)` and `count_if` with argument `t_unary_predicate` instead of value

- `map(void* start, void* end, void (*f)(void*))`

- `max(void* start, void* end, t_comparison)` + `min`
- `swap(void*, void*, size_t element_size)`

- useful predicates like `int_compare`, `float_is_positive`, `compare_double` etc

- maybe change semantics for `t_comparison` to be more like `std::less_than`

### LICENSE

```
            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                    Version 2, December 2004

 Copyright (C) 2023 Vincent Lafouasse

 Everyone is permitted to copy and distribute verbatim or modified
 copies of this license document, and changing it is allowed as long
 as the name is changed.

            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. You just DO WHAT THE FUCK YOU WANT TO.
```
