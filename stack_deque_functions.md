# `std::stack` and `std::deque<T>` Functions Reference

This reference matches the C++98 standard used by this project.

---

## `std::stack<T, Container>`

`std::stack` is a container adaptor. By default, it uses `std::deque<T>` as the underlying container.

### Member Types

| Type | Description |
|---|---|
| `value_type` | Type of stored element |
| `container_type` | Underlying container type |
| `size_type` | Unsigned size type |

### Member Functions

| Function | Description |
|---|---|
| `stack<T>()` | Constructs an empty stack using the default underlying container |
| `explicit stack<T>(const Container& c)` | Constructs a stack from an existing container |
| `s.empty()` | Returns `true` if the stack is empty |
| `s.size()` | Returns number of elements |
| `s.top()` | Returns reference to the top element |
| `s.top() const` | Returns const reference to the top element |
| `s.push(x)` | Pushes `x` onto the top |
| `s.pop()` | Removes the top element |

### Non-Member Operators

| Function | Description |
|---|---|
| `lhs == rhs` | Checks whether two stacks are equal |
| `lhs != rhs` | Checks whether two stacks are different |
| `lhs < rhs` | Lexicographical comparison |
| `lhs <= rhs` | Lexicographical comparison |
| `lhs > rhs` | Lexicographical comparison |
| `lhs >= rhs` | Lexicographical comparison |

### Notes

| Fact | Explanation |
|---|---|
| No iterators | `std::stack` does not expose `begin()` / `end()` |
| No random access | You can only access the top through `top()` |
| Default container | Usually `std::deque<T>` |

---

## `std::deque<T>`

`std::deque` is a double-ended sequence container. It allows fast insertion and removal at both the front and the back.

### Member Types

| Type | Description |
|---|---|
| `value_type` | Type of stored element |
| `allocator_type` | Allocator type |
| `reference` | Reference to element |
| `const_reference` | Const reference to element |
| `pointer` | Pointer to element |
| `const_pointer` | Const pointer to element |
| `iterator` | Iterator type |
| `const_iterator` | Const iterator type |
| `reverse_iterator` | Reverse iterator type |
| `const_reverse_iterator` | Const reverse iterator type |
| `size_type` | Unsigned size type |
| `difference_type` | Signed iterator difference type |

### Constructors / Destructor / Assignment

| Function | Description |
|---|---|
| `deque<T>()` | Constructs an empty deque |
| `explicit deque<T>(const allocator_type& alloc)` | Constructs an empty deque with allocator |
| `explicit deque<T>(size_type n, const T& value = T(), const allocator_type& alloc = allocator_type())` | Constructs deque with `n` copies of `value` |
| `deque<T>(InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type())` | Constructs deque from range |
| `deque<T>(const deque& other)` | Copy constructor |
| `~deque<T>()` | Destructor |
| `d = other` | Copy assignment |

### Iterators

| Function | Description |
|---|---|
| `d.begin()` | Iterator to first element |
| `d.begin() const` | Const iterator to first element |
| `d.end()` | Iterator past the last element |
| `d.end() const` | Const iterator past the last element |
| `d.rbegin()` | Reverse iterator to last element |
| `d.rbegin() const` | Const reverse iterator to last element |
| `d.rend()` | Reverse iterator before first element |
| `d.rend() const` | Const reverse iterator before first element |

### Capacity

| Function | Description |
|---|---|
| `d.size()` | Returns number of elements |
| `d.max_size()` | Returns maximum possible number of elements |
| `d.resize(n, value)` | Resizes to `n` elements, filling new ones with `value` if needed |
| `d.empty()` | Returns `true` if deque is empty |

### Element Access

| Function | Description |
|---|---|
| `d[i]` | Access element at index `i` without bounds checking |
| `d.at(i)` | Access element at index `i` with bounds checking |
| `d.front()` | First element |
| `d.front() const` | First element as const reference |
| `d.back()` | Last element |
| `d.back() const` | Last element as const reference |

### Modifiers

| Function | Description |
|---|---|
| `d.assign(n, value)` | Replaces contents with `n` copies of `value` |
| `d.assign(first, last)` | Replaces contents with elements from range |
| `d.push_back(x)` | Appends `x` to the end |
| `d.push_front(x)` | Inserts `x` at the front |
| `d.pop_back()` | Removes the last element |
| `d.pop_front()` | Removes the first element |
| `d.insert(pos, value)` | Inserts one element before `pos` |
| `d.insert(pos, n, value)` | Inserts `n` copies before `pos` |
| `d.insert(pos, first, last)` | Inserts a range before `pos` |
| `d.erase(pos)` | Erases element at `pos` |
| `d.erase(first, last)` | Erases range |
| `d.swap(other)` | Swaps contents with another deque |
| `d.clear()` | Removes all elements |

### Allocator

| Function | Description |
|---|---|
| `d.get_allocator()` | Returns the allocator object |

### Non-Member Operators

| Function | Description |
|---|---|
| `lhs == rhs` | Checks whether two deques are equal |
| `lhs != rhs` | Checks whether two deques are different |
| `lhs < rhs` | Lexicographical comparison |
| `lhs <= rhs` | Lexicographical comparison |
| `lhs > rhs` | Lexicographical comparison |
| `lhs >= rhs` | Lexicographical comparison |

### Non-Member Function

| Function | Description |
|---|---|
| `swap(lhs, rhs)` | Swaps contents of two deques |

### Notes

| Fact | Explanation |
|---|---|
| Fast front/back operations | Efficient `push_front`, `push_back`, `pop_front`, `pop_back` |
| Random access supported | You can use `d[i]` and `d.at(i)` |
| No `capacity()` | Unlike `std::vector`, `std::deque` has no `capacity()` or `reserve()` |
