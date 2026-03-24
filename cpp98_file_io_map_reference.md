# C++98 File I/O, String Parsing & Map Storage — Practical Reference

> **Workflow covered:**
> 1. Open and read a file
> 2. Parse / extract specific information from lines
> 3. Store data in a `std::map`
> 4. Query / check specific values

---

## Table of Contents
1. [File I/O — `<fstream>`](#1-file-io--fstream)
2. [String Operations — `<string>`](#2-string-operations--string)
3. [String Streams (parsing) — `<sstream>`](#3-string-streams-parsing--sstream)
4. [Map Container — `<map>`](#4-map-container--map)
5. [Complete Example](#5-complete-example)

---

## 1. File I/O — `<fstream>`

Include: `#include <fstream>`

### Opening a file

```cpp
std::ifstream file("data.txt");          // open for reading
std::ofstream out("output.txt");         // open for writing (overwrites)
std::ofstream out("output.txt", std::ios::app); // open for appending
std::fstream  rw("data.txt", std::ios::in | std::ios::out); // read + write
```

### Open modes (`std::ios::`)

| Flag | Description |
|------|-------------|
| `in` | Open for reading (default for `ifstream`) |
| `out` | Open for writing (default for `ofstream`) |
| `app` | Append — all writes go to end of file |
| `ate` | Open and immediately seek to end |
| `trunc` | Truncate file to zero on open |
| `binary` | Open in binary mode (no newline translation) |

### Checking if open

```cpp
std::ifstream file("data.txt");
if (!file.is_open()) {
    std::cerr << "Could not open file!" << std::endl;
}
```

### Reading functions

| Function | Signature | Description |
|----------|-----------|-------------|
| `getline` | `getline(file, str)` | Reads a full line into a `std::string` (recommended) |
| `>>` operator | `file >> var` | Reads whitespace-delimited token into var |
| `get` | `file.get(c)` | Reads a single character |
| `read` | `file.read(buf, n)` | Reads n bytes into a char buffer (binary) |
| `getline` (C-style) | `file.getline(buf, n)` | Reads a line into a char array |
| `peek` | `file.peek()` | Returns next char without extracting it |
| `ignore` | `file.ignore(n, delim)` | Skips up to n characters or until delim |
| `eof` | `file.eof()` | Returns true if end-of-file is reached |
| `good` | `file.good()` | Returns true if no errors |
| `fail` | `file.fail()` | Returns true if a read/write error occurred |
| `bad` | `file.bad()` | Returns true on critical I/O error |
| `clear` | `file.clear()` | Clears all error/eof flags |
| `seekg` | `file.seekg(pos)` | Moves the read position |
| `tellg` | `file.tellg()` | Returns the current read position |

### Writing functions

| Function | Signature | Description |
|----------|-----------|-------------|
| `<<` operator | `out << value` | Writes formatted value to file |
| `put` | `out.put(c)` | Writes a single character |
| `write` | `out.write(buf, n)` | Writes n bytes from char buffer (binary) |
| `flush` | `out.flush()` | Forces buffer to be written to disk |
| `seekp` | `out.seekp(pos)` | Moves the write position |
| `tellp` | `out.tellp()` | Returns current write position |

### Closing

```cpp
file.close(); // always close when done (also called automatically by destructor)
```

---

## 2. String Operations — `<string>`

Include: `#include <string>`

These are the most useful functions for **parsing lines** read from a file.

### Searching

| Function | Signature | Description |
|----------|-----------|-------------|
| `find` | `s.find(sub, pos=0)` | First occurrence of sub; returns `string::npos` if not found |
| `rfind` | `s.rfind(sub)` | Last occurrence of sub |
| `find_first_of` | `s.find_first_of(chars)` | First char that matches any in chars |
| `find_last_of` | `s.find_last_of(chars)` | Last char that matches any in chars |
| `find_first_not_of` | `s.find_first_not_of(chars)` | First char NOT in chars (useful to trim) |
| `find_last_not_of` | `s.find_last_not_of(chars)` | Last char NOT in chars |

> `std::string::npos` is the "not found" sentinel value (equals `size_t(-1)`).

### Extracting

| Function | Signature | Description |
|----------|-----------|-------------|
| `substr` | `s.substr(pos, len)` | Returns a copy of the substring |
| `operator[]` | `s[i]` | Character at index i (no bounds check) |
| `at` | `s.at(i)` | Character at index i (throws `out_of_range`) |

### Modifying

| Function | Signature | Description |
|----------|-----------|-------------|
| `erase` | `s.erase(pos, len)` | Removes len characters starting at pos |
| `replace` | `s.replace(pos, len, s2)` | Replaces a portion with s2 |
| `insert` | `s.insert(pos, s2)` | Inserts s2 at pos |
| `append` | `s.append(s2)` | Appends s2 at end |
| `clear` | `s.clear()` | Empties the string |
| `resize` | `s.resize(n)` | Resizes to n characters |

### Information

| Function | Description |
|----------|-------------|
| `s.size()` / `s.length()` | Number of characters |
| `s.empty()` | True if string is empty |
| `s.c_str()` | Returns const char* (null-terminated) |
| `s.compare(s2)` | 0 if equal, <0 or >0 otherwise |

### Converting strings to numbers (C++98 way)

```cpp
#include <cstdlib>

int    i = std::atoi(s.c_str());   // string -> int
long   l = std::atol(s.c_str());   // string -> long
double d = std::atof(s.c_str());   // string -> double

// safer: use strtol with error checking
char* end;
long val = std::strtol(s.c_str(), &end, 10); // base 10
```

---

## 3. String Streams (parsing) — `<sstream>`

Include: `#include <sstream>`

`std::istringstream` is the most powerful tool to **parse a line** into tokens or typed values in C++98.

### Parsing a line into tokens

```cpp
std::string line = "Alice 30 engineer";
std::istringstream iss(line);

std::string name, job;
int age;
iss >> name >> age >> job;
// name = "Alice", age = 30, job = "engineer"
```

### Parsing CSV / delimiter-separated data

```cpp
std::string line = "Alice,30,engineer";
std::istringstream iss(line);
std::string token;

while (std::getline(iss, token, ',')) {
    // token = "Alice", then "30", then "engineer"
}
```

### Converting number to string (C++98 way)

```cpp
#include <sstream>

int n = 42;
std::ostringstream oss;
oss << n;
std::string s = oss.str(); // s = "42"
```

### Key members

| Function | Description |
|----------|-------------|
| `str()` | Returns the internal string |
| `str(s)` | Replaces the internal string |
| `clear()` | Resets error flags (so you can reuse the stream) |
| `>>` | Extracts whitespace-delimited token (type-aware) |
| `getline(iss, tok, delim)` | Extracts up to delimiter |

---

## 4. Map Container — `<map>`

Include: `#include <map>`

`std::map<Key, Value>` stores key-value pairs sorted by key. Lookup, insert, and delete are **O(log n)**.

### Declaring

```cpp
std::map<std::string, int>         nameToAge;
std::map<int, std::string>         idToName;
std::map<std::string, std::string> config;  // e.g. key=value pairs from a file
```

### Inserting

```cpp
nameToAge["Alice"] = 30;                           // operator[] — inserts if not present
nameToAge.insert(std::make_pair("Bob", 25));       // explicit insert
```

> ⚠️ `operator[]` **creates** an entry with a default value if the key doesn't exist.  
> Use `find()` first if you only want to read.

### Accessing / checking

| Function | Description |
|----------|-------------|
| `m[key]` | Access value (inserts default if key absent!) |
| `m.at(key)` | *(C++11 only — not in C++98)* |
| `m.find(key)` | Returns iterator to element, or `m.end()` if not found |
| `m.count(key)` | Returns 1 if key exists, 0 otherwise (safe existence check) |

```cpp
// Safe read in C++98:
std::map<std::string, int>::iterator it = nameToAge.find("Alice");
if (it != nameToAge.end()) {
    std::cout << "Found: " << it->second << std::endl;
} else {
    std::cout << "Not found" << std::endl;
}
```

### Iterating

```cpp
std::map<std::string, int>::iterator it;
for (it = nameToAge.begin(); it != nameToAge.end(); ++it) {
    std::cout << it->first << " => " << it->second << std::endl;
}
```

### Modifying / removing

| Function | Description |
|----------|-------------|
| `m.erase(key)` | Removes element with given key |
| `m.erase(it)` | Removes element at iterator |
| `m.clear()` | Removes all elements |

### Information

| Function | Description |
|----------|-------------|
| `m.size()` | Number of key-value pairs |
| `m.empty()` | True if map has no elements |
| `m.begin()` / `m.end()` | Iterators to first / past-last element |
| `m.lower_bound(k)` | Iterator to first key >= k |
| `m.upper_bound(k)` | Iterator to first key > k |
| `m.equal_range(k)` | Pair of iterators around key k |

---

## 5. Complete Example

Full workflow: **read a file → parse lines → store in map → query specific info**

Assume `people.txt` contains:
```
Alice 30 engineer
Bob 25 designer
Carol 35 manager
```

```cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

struct Person {
    int         age;
    std::string job;
};

int main() {
    // --- 1. Open file ---
    std::ifstream file("people.txt");
    if (!file.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    // --- 2. Read & parse, store in map ---
    std::map<std::string, Person> people;
    std::string line;

    while (std::getline(file, line)) {
        if (line.empty()) continue;

        std::istringstream iss(line);
        std::string name, job;
        int age;

        if (iss >> name >> age >> job) {
            Person p;
            p.age = age;
            p.job = job;
            people[name] = p;
        }
    }
    file.close();

    // --- 3. Query specific information ---
    std::string search = "Bob";
    std::map<std::string, Person>::iterator it = people.find(search);

    if (it != people.end()) {
        std::cout << "Name: " << it->first         << std::endl;
        std::cout << "Age:  " << it->second.age     << std::endl;
        std::cout << "Job:  " << it->second.job     << std::endl;
    } else {
        std::cout << search << " not found." << std::endl;
    }

    // --- 4. Save results to a new file ---
    std::ofstream out("results.txt");
    std::map<std::string, Person>::iterator wit;
    for (wit = people.begin(); wit != people.end(); ++wit) {
        out << wit->first << " "
            << wit->second.age << " "
            << wit->second.job << "\n";
    }
    out.close();

    return 0;
}
```

### Output
```
Name: Bob
Age:  25
Job:  designer
```

---

## Quick Cheat Sheet

| Goal | What to use |
|------|-------------|
| Open a file for reading | `std::ifstream f("file.txt")` |
| Read line by line | `std::getline(f, line)` |
| Parse a line into typed values | `std::istringstream iss(line); iss >> a >> b >> c` |
| Parse CSV / custom delimiter | `std::getline(iss, token, ',')` |
| Store key-value data | `std::map<K, V>` |
| Check if key exists (safe) | `m.find(key) != m.end()` or `m.count(key)` |
| Write to a file | `std::ofstream out("out.txt"); out << data` |
| Convert string to int | `std::atoi(s.c_str())` |
| Convert int to string | `std::ostringstream oss; oss << n; oss.str()` |
