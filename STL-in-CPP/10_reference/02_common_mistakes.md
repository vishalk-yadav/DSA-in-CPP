# Common STL Mistakes

1. Calling `v[100]` when the vector is smaller.
2. Forgetting that `map[key]` can insert a new key.
3. Using `binary_search` on unsorted data.
4. Assuming `unordered_map` iteration is sorted.
5. Invalidating an iterator after `vector` insertion/erase.
6. Forgetting erase-after-remove:
   ```cpp
   v.erase(remove(v.begin(), v.end(), x), v.end());
   ```
7. Using `std::endl` everywhere when `'\n'` is enough.
8. Copying large containers unnecessarily.
9. Using `shared_ptr` by default instead of choosing ownership deliberately.
10. Forgetting that `list` has no random access.
11. Using `reserve()` and `resize()` as if they meant the same thing.
12. Passing expensive objects by value into algorithms.
