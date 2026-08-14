# STL Roadmap

## 1. Containers

### Sequence containers
- `array`
- `vector`
- `deque`
- `list`
- `forward_list`

### Container adapters
- `stack`
- `queue`
- `priority_queue`

### Ordered associative containers
- `set`
- `multiset`
- `map`
- `multimap`

### Unordered associative containers
- `unordered_set`
- `unordered_multiset`
- `unordered_map`
- `unordered_multimap`

### Useful standard containers/types
- `bitset`
- `string`

## 2. Iterators
- begin/end
- cbegin/cend
- rbegin/rend
- iterator categories
- `advance`
- `distance`
- `next`
- `prev`
- insert iterators

## 3. Algorithms

### Non-modifying
- `find`
- `count`
- `count_if`
- `all_of`
- `any_of`
- `none_of`
- `for_each`
- `mismatch`
- `equal`
- `search`

### Modifying
- `copy`
- `copy_if`
- `move`
- `fill`
- `replace`
- `remove`
- `unique`
- `reverse`
- `rotate`
- `shuffle`
- `swap`

### Sorting / searching
- `sort`
- `stable_sort`
- `partial_sort`
- `nth_element`
- `lower_bound`
- `upper_bound`
- `equal_range`
- `binary_search`

### Heap
- `make_heap`
- `push_heap`
- `pop_heap`
- `sort_heap`

### Set algorithms
- `set_union`
- `set_intersection`
- `set_difference`
- `set_symmetric_difference`
- `includes`

### Min/max
- `min`
- `max`
- `min_element`
- `max_element`
- `minmax`
- `minmax_element`

## 4. Function objects / callables
- comparators
- `less`
- `greater`
- `equal_to`
- arithmetic functors
- logical functors
- predicates
- lambdas
- `std::function`
- `std::bind`

## 5. Utilities
- `pair`
- `tuple`
- `tie`
- `get`
- `optional`
- `variant`
- `any`
- `swap`

## 6. Memory
- `unique_ptr`
- `shared_ptr`
- `weak_ptr`
- `make_unique`
- `make_shared`
- `allocator`
- `uninitialized_*`

## 7. Numeric
- `accumulate`
- `inner_product`
- `partial_sum`
- `adjacent_difference`
- `iota`
- `reduce`
- `exclusive_scan`
- `inclusive_scan`

## 8. C++20 STL/Ranges
- `ranges::sort`
- `ranges::find`
- views
- filter
- transform
- take
- drop
