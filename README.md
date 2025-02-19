# std::vector<bool> Pitfalls

This repository demonstrates the potential performance and behavioral issues associated with using `std::vector<bool>` in C++.  `std::vector<bool>` is not a simple vector of booleans; it uses a bitset for storage, leading to unconventional memory management and iterator behavior.

**Problem:**
- Unexpected memory usage and overhead
- Slower access times compared to other bool representations
- Inefficient insertion/deletion of elements
- Non-standard iterator behavior

**Solution:**
Consider using alternatives such as `std::vector<char>` (or `std::vector<uint8_t>`) for more efficient storage and performance when dealing with large collections of booleans. For small sets, a `bool` array may even be more optimal.  Be cautious of potential issues when using algorithms that expect standard iterators with `std::vector<bool>`. 