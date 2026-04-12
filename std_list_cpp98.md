# std::list — C++98 Reference

```cpp
#include <list>
```

`std::list` is a doubly linked sequence container. It supports fast insertion and removal anywhere in the container, but does **not** support random access like `vector` or `deque`.

---

## Constructors & Destructor

| Syntax | Description |
|--------|-------------|
| `list()` | Constructs an empty list |
| `list(size_t n, const T& val)` | Constructs a list with `n` copies of `val` |
| `list(InputIt first, InputIt last)` | Constructs from iterator range |
| `list(const list& x)` | Copy constructor |
| `~list()` | Destructor — destroys the list and frees memory |

---

## Assignment

| Syntax | Description |
|--------|-------------|
| `operator=(const list& x)` | Assignment operator |
| `assign(size_t n, const T& val)` | Replaces content with `n` copies of `val` |
| `assign(InputIt first, InputIt last)` | Replaces content with iterator range |

---

## Iterators

| Syntax | Description |
|--------|-------------|
| `begin()` | Iterator to the first element |
| `end()` | Iterator past the last element |
| `rbegin()` | Reverse iterator to the last element |
| `rend()` | Reverse iterator before the first element |

> `const_iterator` versions are available automatically on `const list` objects.

---

## Capacity

| Syntax | Description |
|--------|-------------|
| `empty()` | Returns `true` if the list is empty |
| `size()` | Returns the number of elements |
| `max_size()` | Returns the maximum possible number of elements |

---

## Element Access

| Syntax | Description |
|--------|-------------|
| `front()` | Reference to the first element |
| `back()` | Reference to the last element |

> ⚠️ `operator[]` does **not** exist — random access is not supported.

---

## Modifiers

| Syntax | Description |
|--------|-------------|
| `push_front(const T& val)` | Inserts element at the beginning |
| `pop_front()` | Removes the first element |
| `push_back(const T& val)` | Inserts element at the end |
| `pop_back()` | Removes the last element |
| `insert(iterator pos, const T& val)` | Inserts `val` before `pos` |
| `insert(iterator pos, size_t n, const T& val)` | Inserts `n` copies before `pos` |
| `insert(iterator pos, InputIt first, InputIt last)` | Inserts iterator range before `pos` |
| `erase(iterator pos)` | Removes element at `pos` |
| `erase(iterator first, iterator last)` | Removes elements in range |
| `clear()` | Removes all elements |
| `resize(size_t n, T val = T())` | Resizes the list to `n` elements |
| `swap(list& x)` | Swaps contents with another list |

---

## Operations (list-specific)

| Syntax | Description |
|--------|-------------|
| `splice(iterator pos, list& x)` | Moves all elements of `x` before `pos` |
| `splice(iterator pos, list& x, iterator i)` | Moves single element from `x` before `pos` |
| `splice(iterator pos, list& x, iterator f, iterator l)` | Moves range from `x` before `pos` |
| `remove(const T& val)` | Removes all elements equal to `val` |
| `remove_if(Predicate pred)` | Removes all elements satisfying `pred` |
| `unique()` | Removes consecutive duplicate elements |
| `unique(BinaryPredicate pred)` | Removes consecutive elements satisfying `pred` |
| `merge(list& x)` | Merges sorted `x` into this sorted list |
| `merge(list& x, Compare comp)` | Merges using custom comparator |
| `sort()` | Sorts the list in ascending order |
| `sort(Compare comp)` | Sorts using custom comparator |
| `reverse()` | Reverses the order of elements |

---

## Non-member Functions

| Syntax | Description |
|--------|-------------|
| `operator==` | Compares two lists for equality |
| `operator!=` | Compares two lists for inequality |
| `operator<` | Lexicographic less-than comparison |
| `operator<=` | Lexicographic less-than-or-equal comparison |
| `operator>` | Lexicographic greater-than comparison |
| `operator>=` | Lexicographic greater-than-or-equal comparison |
| `swap(list& x, list& y)` | Swaps contents of two lists |

---

## Allocator

| Syntax | Description |
|--------|-------------|
| `get_allocator()` | Returns the allocator used by the list |

---

## ⚠️ NOT in C++98

Do **not** use these — they were added in C++11 or later:

| Function | Added in |
|----------|----------|
| `emplace()`, `emplace_back()`, `emplace_front()` | C++11 |
| `cbegin()`, `cend()`, `crbegin()`, `crend()` | C++11 |
| Move constructor / move assignment | C++11 |
| Initializer list constructor `list({1, 2, 3})` | C++11 |

---

## Key Characteristics

| Property | std::list |
|----------|-----------|
| Underlying structure | Doubly linked list |
| Random access | ❌ Not supported |
| Insert / erase anywhere | ✅ O(1) |
| Iterator stability on insert/erase | ✅ Other iterators remain valid |
| Memory layout | Non-contiguous (scattered in heap) |
| `operator[]` | ❌ Not available |
