# std::vector<int> Functions Reference

---

## Member Functions

| Function | Description |
|---|---|
| `v.push_back(x)` | Appends `x` to the end |
| `v.pop_back()` | Removes the last element |
| `v.insert(it, x)` | Inserts `x` before the iterator position |
| `v.erase(it)` | Removes element at iterator position |
| `v.size()` | Returns number of elements |
| `v.capacity()` | Returns allocated storage capacity |
| `v.resize(n)` | Resizes to `n` elements |
| `v.reserve(n)` | Pre-allocates space for `n` elements |
| `v.clear()` | Removes all elements |
| `v.empty()` | Returns `true` if empty |
| `v.front()` | First element |
| `v.back()` | Last element |
| `v.at(i)` | Element at index `i`, with bounds checking |
| `v[i]` | Element at index `i`, no bounds checking |
| `v.begin()` / `v.end()` | Iterators to first/past-last element |

---

## `<algorithm>` Functions (work on iterators)

| Function | Description |
|---|---|
| `std::sort(v.begin(), v.end())` | Sorts ascending |
| `std::sort(v.begin(), v.end(), cmp)` | Sorts with custom comparator |
| `std::min_element(v.begin(), v.end())` | Returns iterator to smallest element |
| `std::max_element(v.begin(), v.end())` | Returns iterator to largest element |
| `std::find(v.begin(), v.end(), x)` | Returns iterator to first occurrence of `x` |
| `std::count(v.begin(), v.end(), x)` | Count occurrences of `x` |
| `std::accumulate(v.begin(), v.end(), 0)` | Sum of all elements (needs `<numeric>`) |
| `std::distance(it1, it2)` | Number of steps between two iterators |
| `std::reverse(v.begin(), v.end())` | Reverses the vector in-place |
| `std::unique(v.begin(), v.end())` | Removes consecutive duplicates (sort first) |
| `std::copy(v.begin(), v.end(), dest)` | Copies elements to another container |
| `std::fill(v.begin(), v.end(), x)` | Sets all elements to `x` |
| `std::for_each(v.begin(), v.end(), fn)` | Calls `fn` on each element |
