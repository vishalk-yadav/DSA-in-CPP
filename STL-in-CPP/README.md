# C++ STL Masterclass

A practical, GitHub-ready repository for learning the C++ Standard Template Library (STL) from beginner to advanced level.

## Compiler
Use **C++17** for the main examples.

Recommended:
```bash
g++ -std=c++17 file.cpp -o app
./app
```

For C++20 ranges:
```bash
g++ -std=c++20 file.cpp -o app
./app
```

## Learning order

1. Containers
   - Array, Vector, Deque
   - List, Forward List
   - Stack, Queue, Priority Queue
   - Set, Multiset
   - Unordered Set
   - Map, Multimap
   - Unordered Map
   - Bitset, String
2. Iterators
3. Algorithms
4. Function objects, lambdas, predicates
5. Utilities
   - Pair, Tuple
   - Optional
   - Variant
   - Any
6. Memory
   - Smart pointers
   - Allocators / custom allocator demo
7. Numeric algorithms
8. C++20 Ranges
9. STL complexity and common mistakes
10. Practice problems

## Important idea

The STL is about combining:
- **containers** → store data
- **iterators** → move through data
- **algorithms** → process data
- **callables** → customize behavior

Classic pattern:
```cpp
sort(v.begin(), v.end());
```

Here:
- `v` is a container
- `begin()` / `end()` provide iterators
- `sort()` is an algorithm

## Repository map

See `STL_ROADMAP.md` for the full syllabus.
Each topic contains a standalone `.cpp` file.
