# Which Container Should I Use?

## Use `vector`
Default choice for most dynamic arrays.

## Use `array`
Fixed-size compile-time array.

## Use `deque`
Frequent insertion/removal at both ends.

## Use `list`
Frequent insertion/removal in the middle with stable iterators and an existing position. Avoid it as a default.

## Use `stack`
LIFO.

## Use `queue`
FIFO.

## Use `priority_queue`
Always need the largest/smallest element quickly.

## Use `set`
Unique sorted values.

## Use `map`
Key-value pairs sorted by key.

## Use `unordered_set`
Unique values with fast average lookup.

## Use `unordered_map`
Fast average key-value lookup.

## Rule of thumb

Start with `vector`.
Move away from it only when your workload clearly needs something else.
