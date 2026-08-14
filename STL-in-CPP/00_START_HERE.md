# START HERE — How to Learn STL

Don't try to memorize 200 functions.

Learn the mental model:

`Container -> Iterator -> Algorithm -> Callable`

Example:
```cpp
vector<int> v = {5, 2, 8, 1};

sort(v.begin(), v.end(), greater<int>());
```

- `vector` stores data.
- `begin/end` provide iterator range.
- `sort` performs the algorithm.
- `greater<int>` changes the ordering.

## What to master first

### Level 1
`vector`, `pair`, `set`, `map`, `unordered_map`, `stack`, `queue`, `priority_queue`

### Level 2
`sort`, `find`, `count`, `reverse`, `binary_search`, `lower_bound`, `upper_bound`

### Level 3
comparators, lambdas, iterators, custom sorting, erase-remove idiom

### Level 4
`unordered_*`, heaps, numeric algorithms, smart pointers, ranges

For DSA and coding interviews, the highest-value STL topics are:
- vector
- pair
- set/map
- unordered_map
- stack/queue
- priority_queue
- sort
- binary search helpers
- custom comparator
- iterators
- algorithms with lambdas
