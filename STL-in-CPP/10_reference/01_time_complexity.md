# Common STL Complexity

| Operation | Typical complexity |
|---|---|
| vector access `v[i]` | O(1) |
| vector `push_back` | Amortized O(1) |
| vector insert/erase middle | O(n) |
| deque front/back push | O(1) |
| list insert/erase at known iterator | O(1) |
| stack push/pop/top | O(1) |
| queue push/pop/front | O(1) |
| priority_queue push/pop | O(log n) |
| set/map find/insert/erase | O(log n) |
| unordered_set/map average find/insert/erase | O(1) |
| sort | O(n log n) |
| binary_search | O(log n) |
| lower_bound / upper_bound | O(log n) |
| count | O(n) |
| accumulate | O(n) |

## Important

Big-O is not the whole story:
- contiguous memory often improves cache performance
- `unordered_*` has average O(1), not guaranteed O(1)
- iterator invalidation rules differ by container
