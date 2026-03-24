# C++98 Standard Library — Complete Function & Symbol Reference

> **Usage**: All symbols are in `namespace std` unless otherwise noted (C macros are global).  
> Each entry shows: `symbol` — **type** — `<header>` — description.

---

## Table of Contents
1. [\<algorithm\>](#algorithm)
2. [\<bitset\>](#bitset)
3. [\<cassert\>](#cassert)
4. [\<cctype\>](#cctype)
5. [\<cerrno\>](#cerrno)
6. [\<cfloat\>](#cfloat)
7. [\<climits\>](#climits)
8. [\<clocale\>](#clocale)
9. [\<cmath\>](#cmath)
10. [\<complex\>](#complex)
11. [\<csetjmp\>](#csetjmp)
12. [\<csignal\>](#csignal)
13. [\<cstdarg\>](#cstdarg)
14. [\<cstddef\>](#cstddef)
15. [\<cstdio\>](#cstdio)
16. [\<cstdlib\>](#cstdlib)
17. [\<cstring\>](#cstring)
18. [\<ctime\>](#ctime)
19. [\<cwchar\>](#cwchar)
20. [\<cwctype\>](#cwctype)
21. [\<deque\>](#deque)
22. [\<exception\>](#exception)
23. [\<fstream\>](#fstream)
24. [\<functional\>](#functional)
25. [\<iomanip\>](#iomanip)
26. [\<ios\>](#ios)
27. [\<iostream\>](#iostream)
28. [\<istream\>](#istream)
29. [\<iterator\>](#iterator)
30. [\<limits\>](#limits)
31. [\<list\>](#list)
32. [\<locale\>](#locale)
33. [\<map\>](#map)
34. [\<memory\>](#memory)
35. [\<new\>](#new)
36. [\<numeric\>](#numeric)
37. [\<ostream\>](#ostream)
38. [\<queue\>](#queue)
39. [\<set\>](#set)
40. [\<sstream\>](#sstream)
41. [\<stack\>](#stack)
42. [\<stdexcept\>](#stdexcept)
43. [\<streambuf\>](#streambuf)
44. [\<string\>](#string)
45. [\<typeinfo\>](#typeinfo)
46. [\<utility\>](#utility)
47. [\<valarray\>](#valarray)
48. [\<vector\>](#vector)

---

## \<algorithm\>

| Symbol | Type | Description |
|--------|------|-------------|
| `adjacent_find` | function | Finds the first pair of adjacent equal elements in a range |
| `binary_search` | function | Checks if a sorted range contains a value |
| `copy` | function | Copies elements from one range to another |
| `copy_backward` | function | Copies elements in reverse order to a destination |
| `count` | function | Counts elements equal to a given value |
| `count_if` | function | Counts elements satisfying a predicate |
| `equal` | function | Tests if two ranges are element-wise equal |
| `equal_range` | function | Returns iterators to the lower and upper bound of a value in a sorted range |
| `fill` | function | Assigns a value to all elements in a range |
| `fill_n` | function | Assigns a value to the first N elements of a range |
| `find` | function | Returns iterator to the first element equal to value |
| `find_end` | function | Finds the last occurrence of a subsequence in a range |
| `find_first_of` | function | Finds the first element matching any in another range |
| `find_if` | function | Returns iterator to the first element satisfying a predicate |
| `for_each` | function | Applies a function to every element in a range |
| `generate` | function | Assigns values from a generator function to a range |
| `generate_n` | function | Assigns values from a generator function to N elements |
| `includes` | function | Checks if a sorted range includes another sorted range |
| `inplace_merge` | function | Merges two consecutive sorted sub-ranges in-place |
| `iter_swap` | function | Swaps the values that two iterators point to |
| `lexicographical_compare` | function | Compares two ranges lexicographically |
| `lower_bound` | function | Returns iterator to first element not less than value (sorted range) |
| `make_heap` | function | Rearranges a range into a max-heap |
| `max` | function | Returns the larger of two values |
| `max_element` | function | Returns iterator to the maximum element in a range |
| `merge` | function | Merges two sorted ranges into a third |
| `min` | function | Returns the smaller of two values |
| `min_element` | function | Returns iterator to the minimum element in a range |
| `mismatch` | function | Finds the first mismatching pair of elements in two ranges |
| `next_permutation` | function | Transforms a range into the next lexicographic permutation |
| `nth_element` | function | Partially sorts a range: element at nth position is what it would be if sorted |
| `partial_sort` | function | Sorts the first N elements of a range |
| `partial_sort_copy` | function | Copies the smallest N elements sorted into a destination |
| `partition` | function | Reorders elements so those satisfying predicate come first |
| `pop_heap` | function | Removes the largest element from a heap |
| `prev_permutation` | function | Transforms a range into the previous lexicographic permutation |
| `push_heap` | function | Adds an element to a heap |
| `random_shuffle` | function | Randomly reorders elements in a range |
| `remove` | function | Removes elements equal to value (logical removal) |
| `remove_copy` | function | Copies elements, omitting those equal to value |
| `remove_copy_if` | function | Copies elements, omitting those satisfying predicate |
| `remove_if` | function | Removes elements satisfying a predicate (logical removal) |
| `replace` | function | Replaces elements equal to old value with new value |
| `replace_copy` | function | Copies range, replacing elements equal to value |
| `replace_copy_if` | function | Copies range, replacing elements satisfying predicate |
| `replace_if` | function | Replaces elements satisfying a predicate |
| `reverse` | function | Reverses the order of elements in a range |
| `reverse_copy` | function | Copies range in reverse order |
| `rotate` | function | Rotates elements so a given element becomes the first |
| `rotate_copy` | function | Copies a rotated range |
| `search` | function | Searches for a subsequence within a range |
| `search_n` | function | Searches for N consecutive equal elements |
| `set_difference` | function | Computes the difference of two sorted sets |
| `set_intersection` | function | Computes the intersection of two sorted sets |
| `set_symmetric_difference` | function | Computes symmetric difference of two sorted sets |
| `set_union` | function | Computes the union of two sorted sets |
| `sort` | function | Sorts elements in a range (not stable) |
| `sort_heap` | function | Sorts a heap into ascending order |
| `stable_partition` | function | Partitions range preserving relative order |
| `stable_sort` | function | Sorts range, preserving relative order of equal elements |
| `swap_ranges` | function | Swaps elements between two ranges |
| `transform` | function | Applies a function to a range and stores results |
| `unique` | function | Removes consecutive duplicate elements (logical) |
| `unique_copy` | function | Copies range, omitting consecutive duplicates |
| `upper_bound` | function | Returns iterator to first element greater than value (sorted range) |

---

## \<bitset\>

| Symbol | Type | Description |
|--------|------|-------------|
| `bitset` | class | Fixed-size sequence of bits with set/reset/flip/test operations |
| `operator&` | function | Bitwise AND of two bitsets |
| `operator\|` | function | Bitwise OR of two bitsets |
| `operator^` | function | Bitwise XOR of two bitsets |
| `operator<<` | function | Stream insertion / left-shift for bitset |
| `operator>>` | function | Stream extraction / right-shift for bitset |

---

## \<cassert\>

| Symbol | Type | Description |
|--------|------|-------------|
| `assert` | macro | Evaluates an expression; aborts the program if it is false (debugging) |

---

## \<cctype\>

| Symbol | Type | Description |
|--------|------|-------------|
| `isalnum` | function | Returns non-zero if character is alphanumeric |
| `isalpha` | function | Returns non-zero if character is alphabetic |
| `iscntrl` | function | Returns non-zero if character is a control character |
| `isdigit` | function | Returns non-zero if character is a decimal digit |
| `isgraph` | function | Returns non-zero if character has a graphical representation |
| `islower` | function | Returns non-zero if character is lowercase |
| `isprint` | function | Returns non-zero if character is printable |
| `ispunct` | function | Returns non-zero if character is punctuation |
| `isspace` | function | Returns non-zero if character is whitespace |
| `isupper` | function | Returns non-zero if character is uppercase |
| `isxdigit` | function | Returns non-zero if character is a hexadecimal digit |
| `tolower` | function | Converts character to lowercase |
| `toupper` | function | Converts character to uppercase |

---

## \<cerrno\>

| Symbol | Type | Description |
|--------|------|-------------|
| `errno` | macro | Macro that expands to a modifiable lvalue of type int representing error codes |
| `EDOM` | macro | Error code for domain errors in math functions |
| `ERANGE` | macro | Error code for range errors in math functions |

---

## \<cfloat\>

| Symbol | Type | Description |
|--------|------|-------------|
| `FLT_RADIX` | value | Base (radix) of floating-point representation |
| `FLT_MANT_DIG` | value | Number of base-FLT_RADIX digits in float mantissa |
| `FLT_DIG` | value | Decimal digits of precision in float |
| `FLT_MIN_EXP` | value | Minimum negative exponent for float |
| `FLT_MIN_10_EXP` | value | Minimum negative decimal exponent for float |
| `FLT_MAX_EXP` | value | Maximum exponent for float |
| `FLT_MAX_10_EXP` | value | Maximum decimal exponent for float |
| `FLT_MAX` | value | Maximum value of float |
| `FLT_EPSILON` | value | Smallest float such that 1.0 + epsilon != 1.0 |
| `FLT_MIN` | value | Minimum positive normalized float |
| `FLT_ROUNDS` | value | Rounding mode for float addition |
| `DBL_DIG` | value | Decimal digits of precision in double |
| `DBL_EPSILON` | value | Smallest double such that 1.0 + epsilon != 1.0 |
| `DBL_MAX` | value | Maximum value of double |
| `DBL_MIN` | value | Minimum positive normalized double |
| `LDBL_DIG` | value | Decimal digits of precision in long double |
| `LDBL_EPSILON` | value | Smallest long double such that 1.0 + epsilon != 1.0 |
| `LDBL_MAX` | value | Maximum value of long double |
| `LDBL_MIN` | value | Minimum positive normalized long double |

---

## \<climits\>

| Symbol | Type | Description |
|--------|------|-------------|
| `CHAR_BIT` | value | Number of bits in a char |
| `CHAR_MAX` | value | Maximum value of char |
| `CHAR_MIN` | value | Minimum value of char |
| `SCHAR_MAX` | value | Maximum value of signed char |
| `SCHAR_MIN` | value | Minimum value of signed char |
| `UCHAR_MAX` | value | Maximum value of unsigned char |
| `SHRT_MAX` | value | Maximum value of short |
| `SHRT_MIN` | value | Minimum value of short |
| `USHRT_MAX` | value | Maximum value of unsigned short |
| `INT_MAX` | value | Maximum value of int |
| `INT_MIN` | value | Minimum value of int |
| `UINT_MAX` | value | Maximum value of unsigned int |
| `LONG_MAX` | value | Maximum value of long |
| `LONG_MIN` | value | Minimum value of long |
| `ULONG_MAX` | value | Maximum value of unsigned long |
| `MB_LEN_MAX` | value | Maximum bytes in a multi-byte character |

---

## \<clocale\>

| Symbol | Type | Description |
|--------|------|-------------|
| `setlocale` | function | Sets or queries the current locale |
| `localeconv` | function | Returns a pointer to a struct with locale-specific numeric formatting |
| `lconv` | struct | Structure holding locale-specific formatting information |
| `LC_ALL` | macro | Locale category for all settings |
| `LC_COLLATE` | macro | Locale category for string collation |
| `LC_CTYPE` | macro | Locale category for character classification |
| `LC_MONETARY` | macro | Locale category for monetary formatting |
| `LC_NUMERIC` | macro | Locale category for numeric formatting |
| `LC_TIME` | macro | Locale category for date/time formatting |
| `NULL` | macro | Null pointer constant |

---

## \<cmath\>

| Symbol | Type | Description |
|--------|------|-------------|
| `acos` | function | Arc cosine (inverse cosine) of a value |
| `asin` | function | Arc sine (inverse sine) of a value |
| `atan` | function | Arc tangent of a value |
| `atan2` | function | Arc tangent of y/x using signs to determine quadrant |
| `ceil` | function | Rounds up to the nearest integer |
| `cos` | function | Cosine of an angle (in radians) |
| `cosh` | function | Hyperbolic cosine |
| `exp` | function | Exponential function e^x |
| `fabs` | function | Absolute value of a floating-point number |
| `floor` | function | Rounds down to the nearest integer |
| `fmod` | function | Floating-point remainder of division |
| `frexp` | function | Splits a float into mantissa and exponent |
| `ldexp` | function | Multiplies a float by 2 raised to a power |
| `log` | function | Natural logarithm (base e) |
| `log10` | function | Base-10 logarithm |
| `modf` | function | Splits a float into integer and fractional parts |
| `pow` | function | Raises a value to a power |
| `sin` | function | Sine of an angle (in radians) |
| `sinh` | function | Hyperbolic sine |
| `sqrt` | function | Square root |
| `tan` | function | Tangent of an angle (in radians) |
| `tanh` | function | Hyperbolic tangent |
| `HUGE_VAL` | macro | Value returned on overflow (positive infinity or very large double) |

---

## \<complex\>

| Symbol | Type | Description |
|--------|------|-------------|
| `complex` | class | Template class representing complex numbers |
| `abs` | function | Absolute value (modulus) of a complex number |
| `arg` | function | Phase angle (argument) of a complex number |
| `conj` | function | Complex conjugate |
| `cos` | function | Cosine of a complex number |
| `cosh` | function | Hyperbolic cosine of a complex number |
| `exp` | function | Exponential of a complex number |
| `imag` | function | Imaginary part of a complex number |
| `log` | function | Natural logarithm of a complex number |
| `log10` | function | Base-10 logarithm of a complex number |
| `norm` | function | Squared magnitude of a complex number |
| `polar` | function | Constructs a complex number from magnitude and angle |
| `pow` | function | Power of a complex number |
| `real` | function | Real part of a complex number |
| `sin` | function | Sine of a complex number |
| `sinh` | function | Hyperbolic sine of a complex number |
| `sqrt` | function | Square root of a complex number |
| `tan` | function | Tangent of a complex number |
| `tanh` | function | Hyperbolic tangent of a complex number |

---

## \<csetjmp\>

| Symbol | Type | Description |
|--------|------|-------------|
| `setjmp` | macro | Saves the current execution context for later use by `longjmp` |
| `longjmp` | function | Restores execution context saved by `setjmp` (non-local goto) |
| `jmp_buf` | type | Type of buffer used to store the execution context |

---

## \<csignal\>

| Symbol | Type | Description |
|--------|------|-------------|
| `signal` | function | Sets a handler function for a signal |
| `raise` | function | Sends a signal to the current process |
| `sig_atomic_t` | type | Integer type that can be read/written atomically in signal handlers |
| `SIG_DFL` | macro | Default signal handler |
| `SIG_ERR` | macro | Error return value from `signal()` |
| `SIG_IGN` | macro | Signal ignore handler |
| `SIGABRT` | macro | Abnormal termination signal |
| `SIGFPE` | macro | Floating-point error signal |
| `SIGILL` | macro | Illegal instruction signal |
| `SIGINT` | macro | Interactive interrupt signal (Ctrl+C) |
| `SIGSEGV` | macro | Invalid memory access signal |
| `SIGTERM` | macro | Termination request signal |

---

## \<cstdarg\>

| Symbol | Type | Description |
|--------|------|-------------|
| `va_arg` | macro | Retrieves the next argument from a variadic argument list |
| `va_end` | macro | Cleans up a variadic argument list |
| `va_list` | type | Type used to hold variadic argument list information |
| `va_start` | macro | Initializes a variadic argument list |

---

## \<cstddef\>

| Symbol | Type | Description |
|--------|------|-------------|
| `NULL` | macro | Null pointer constant |
| `offsetof` | macro | Byte offset of a member within a struct |
| `ptrdiff_t` | type | Signed integer type for pointer differences |
| `size_t` | type | Unsigned integer type for object sizes |

---

## \<cstdio\>

| Symbol | Type | Description |
|--------|------|-------------|
| `clearerr` | function | Clears error and EOF indicators for a stream |
| `fclose` | function | Closes an open file stream |
| `feof` | function | Tests the end-of-file indicator for a stream |
| `ferror` | function | Tests the error indicator for a stream |
| `fflush` | function | Flushes the output buffer of a stream |
| `fgetc` | function | Reads the next character from a stream |
| `fgetpos` | function | Gets the current file position |
| `fgets` | function | Reads a line from a stream into a buffer |
| `fopen` | function | Opens a file and returns a FILE pointer |
| `fprintf` | function | Writes formatted output to a stream |
| `fputc` | function | Writes a character to a stream |
| `fputs` | function | Writes a string to a stream |
| `fread` | function | Reads binary data from a stream |
| `freopen` | function | Opens a different file on an existing stream |
| `fscanf` | function | Reads formatted input from a stream |
| `fseek` | function | Sets the file position indicator |
| `fsetpos` | function | Sets the file position from a saved fpos_t value |
| `ftell` | function | Gets the current file position as a long int |
| `fwrite` | function | Writes binary data to a stream |
| `getc` | function | Reads the next character from a stream (may be macro) |
| `getchar` | function | Reads the next character from stdin |
| `gets` | function | Reads a line from stdin (unsafe — no bounds checking) |
| `perror` | function | Prints a description of the last error to stderr |
| `printf` | function | Writes formatted output to stdout |
| `putc` | function | Writes a character to a stream (may be macro) |
| `putchar` | function | Writes a character to stdout |
| `puts` | function | Writes a string to stdout followed by a newline |
| `remove` | function | Deletes a file |
| `rename` | function | Renames a file |
| `rewind` | function | Sets the file position to the beginning of a stream |
| `scanf` | function | Reads formatted input from stdin |
| `setbuf` | function | Sets the buffer for a stream |
| `setvbuf` | function | Sets buffering mode and buffer size for a stream |
| `sprintf` | function | Writes formatted output to a string |
| `sscanf` | function | Reads formatted input from a string |
| `tmpfile` | function | Creates a temporary file |
| `tmpnam` | function | Generates a temporary file name |
| `ungetc` | function | Pushes a character back into the input stream |
| `vfprintf` | function | Like fprintf but uses a va_list |
| `vprintf` | function | Like printf but uses a va_list |
| `vsprintf` | function | Like sprintf but uses a va_list |
| `FILE` | type | Opaque type representing a file stream |
| `EOF` | macro | Value returned on end-of-file or error |
| `BUFSIZ` | macro | Default buffer size |
| `FILENAME_MAX` | macro | Maximum length of a file name |
| `FOPEN_MAX` | macro | Maximum number of simultaneously open files |
| `NULL` | macro | Null pointer constant |
| `SEEK_CUR` | macro | Seek relative to current position |
| `SEEK_END` | macro | Seek relative to end of file |
| `SEEK_SET` | macro | Seek relative to beginning of file |
| `TMP_MAX` | macro | Minimum number of unique temporary file names |
| `stderr` | macro | Standard error stream |
| `stdin` | macro | Standard input stream |
| `stdout` | macro | Standard output stream |

---

## \<cstdlib\>

| Symbol | Type | Description |
|--------|------|-------------|
| `abort` | function | Terminates the program abnormally |
| `abs` | function | Absolute value of an integer |
| `atexit` | function | Registers a function to be called at normal program exit |
| `atof` | function | Converts a C-string to a double |
| `atoi` | function | Converts a C-string to an int |
| `atol` | function | Converts a C-string to a long |
| `bsearch` | function | Binary search in a sorted array |
| `calloc` | function | Allocates zero-initialized memory for an array |
| `div` | function | Computes quotient and remainder of integer division |
| `exit` | function | Terminates the program normally, flushing streams |
| `free` | function | Deallocates previously allocated memory |
| `getenv` | function | Retrieves an environment variable value |
| `labs` | function | Absolute value of a long |
| `ldiv` | function | Quotient and remainder of long integer division |
| `malloc` | function | Allocates a block of uninitialized memory |
| `mblen` | function | Returns the byte length of a multi-byte character |
| `mbstowcs` | function | Converts a multi-byte string to wide characters |
| `mbtowc` | function | Converts a multi-byte character to a wide character |
| `qsort` | function | Sorts an array using a comparison function |
| `rand` | function | Generates a pseudo-random integer |
| `realloc` | function | Resizes a previously allocated memory block |
| `srand` | function | Seeds the random number generator |
| `strtod` | function | Converts a C-string to a double |
| `strtol` | function | Converts a C-string to a long |
| `strtoul` | function | Converts a C-string to an unsigned long |
| `system` | function | Executes a system command |
| `wcstombs` | function | Converts a wide-character string to multi-byte |
| `wctomb` | function | Converts a wide character to multi-byte representation |
| `EXIT_FAILURE` | macro | Return value indicating program failure |
| `EXIT_SUCCESS` | macro | Return value indicating program success |
| `RAND_MAX` | macro | Maximum value returned by rand() |
| `MB_CUR_MAX` | macro | Maximum bytes in a multi-byte character for current locale |

---

## \<cstring\>

| Symbol | Type | Description |
|--------|------|-------------|
| `memchr` | function | Searches a memory block for a byte value |
| `memcmp` | function | Compares two memory blocks byte by byte |
| `memcpy` | function | Copies bytes between non-overlapping memory blocks |
| `memmove` | function | Copies bytes between possibly overlapping memory blocks |
| `memset` | function | Fills a memory block with a byte value |
| `strcat` | function | Appends one C-string to another |
| `strchr` | function | Finds the first occurrence of a character in a C-string |
| `strcmp` | function | Compares two C-strings lexicographically |
| `strcoll` | function | Locale-aware comparison of two C-strings |
| `strcpy` | function | Copies one C-string into another |
| `strcspn` | function | Returns the length of the initial segment not containing any char from a set |
| `strerror` | function | Returns a string describing an error code |
| `strlen` | function | Returns the length of a C-string (excluding null terminator) |
| `strncat` | function | Appends at most N characters of one C-string to another |
| `strncmp` | function | Compares at most N characters of two C-strings |
| `strncpy` | function | Copies at most N characters of one C-string to another |
| `strpbrk` | function | Finds first occurrence of any character from a set in a C-string |
| `strrchr` | function | Finds the last occurrence of a character in a C-string |
| `strspn` | function | Returns the length of the initial segment containing only chars from a set |
| `strstr` | function | Finds the first occurrence of a substring in a C-string |
| `strtok` | function | Tokenizes a C-string using delimiter characters |
| `strxfrm` | function | Transforms a C-string for locale-aware comparison |

---

## \<ctime\>

| Symbol | Type | Description |
|--------|------|-------------|
| `asctime` | function | Converts a tm struct to a human-readable string |
| `clock` | function | Returns the processor time consumed by the program |
| `ctime` | function | Converts a time_t value to a human-readable string |
| `difftime` | function | Computes the difference between two time values |
| `gmtime` | function | Converts a time_t to a UTC tm struct |
| `localtime` | function | Converts a time_t to a local time tm struct |
| `mktime` | function | Converts a tm struct to a time_t value |
| `strftime` | function | Formats a time value as a string using format codes |
| `time` | function | Returns the current calendar time as time_t |
| `clock_t` | type | Type for processor time values |
| `time_t` | type | Type for calendar time values |
| `tm` | struct | Structure holding a broken-down calendar time |
| `CLOCKS_PER_SEC` | macro | Number of clock ticks per second |
| `NULL` | macro | Null pointer constant |

---

## \<cwchar\>

| Symbol | Type | Description |
|--------|------|-------------|
| `btowc` | function | Converts a single-byte char to a wide char |
| `fgetwc` | function | Reads a wide character from a stream |
| `fgetws` | function | Reads a wide-character string from a stream |
| `fputwc` | function | Writes a wide character to a stream |
| `fputws` | function | Writes a wide-character string to a stream |
| `fwide` | function | Sets or queries the orientation of a stream (byte vs wide) |
| `fwprintf` | function | Wide-character version of fprintf |
| `fwscanf` | function | Wide-character version of fscanf |
| `getwc` | function | Reads a wide character from a stream |
| `getwchar` | function | Reads a wide character from stdin |
| `mbrlen` | function | Determines the byte length of a multi-byte character (restartable) |
| `mbrtowc` | function | Converts a multi-byte character to wide char (restartable) |
| `mbsinit` | function | Checks if a mbstate_t object represents initial conversion state |
| `mbsrtowcs` | function | Converts a multi-byte string to wide chars (restartable) |
| `putwc` | function | Writes a wide character to a stream |
| `putwchar` | function | Writes a wide character to stdout |
| `swprintf` | function | Wide-character version of sprintf |
| `swscanf` | function | Wide-character version of sscanf |
| `ungetwc` | function | Pushes a wide character back into a stream |
| `vfwprintf` | function | Wide-character version of vfprintf |
| `vswprintf` | function | Wide-character version of vsprintf |
| `vwprintf` | function | Wide-character version of vprintf |
| `wcrtomb` | function | Converts a wide char to multi-byte (restartable) |
| `wcscat` | function | Appends one wide-character string to another |
| `wcschr` | function | Finds a wide character in a wide string |
| `wcscmp` | function | Compares two wide-character strings |
| `wcscoll` | function | Locale-aware comparison of wide-character strings |
| `wcscpy` | function | Copies a wide-character string |
| `wcscspn` | function | Wide-char equivalent of strcspn |
| `wcsftime` | function | Formats time as a wide-character string |
| `wcslen` | function | Returns the length of a wide-character string |
| `wcsncat` | function | Appends N wide chars from one wstring to another |
| `wcsncmp` | function | Compares at most N wide chars of two wstrings |
| `wcsncpy` | function | Copies at most N wide chars |
| `wcspbrk` | function | Wide-char equivalent of strpbrk |
| `wcsrchr` | function | Finds the last occurrence of a wide char in a wstring |
| `wcsrtombs` | function | Converts wide string to multi-byte (restartable) |
| `wcsspn` | function | Wide-char equivalent of strspn |
| `wcsstr` | function | Finds a wide-string substring |
| `wcstod` | function | Converts a wide string to double |
| `wcstok` | function | Tokenizes a wide-character string |
| `wcstol` | function | Converts a wide string to long |
| `wcstoul` | function | Converts a wide string to unsigned long |
| `wcsxfrm` | function | Locale-aware transformation of a wide string |
| `wctob` | function | Converts a wide char to a single-byte character |
| `wmemchr` | function | Finds a wide char in a wide memory block |
| `wmemcmp` | function | Compares two wide-char memory blocks |
| `wmemcpy` | function | Copies wide chars between non-overlapping blocks |
| `wmemmove` | function | Copies wide chars between possibly overlapping blocks |
| `wmemset` | function | Fills a wide-char memory block with a value |
| `wprintf` | function | Wide-character version of printf |
| `wscanf` | function | Wide-character version of scanf |
| `mbstate_t` | type | Conversion state for multi-byte/wide-char conversions |
| `wint_t` | type | Integer type for wide characters, including WEOF |
| `WCHAR_MAX` | macro | Maximum value of wchar_t |
| `WCHAR_MIN` | macro | Minimum value of wchar_t |
| `WEOF` | macro | Wide-character end-of-file/error indicator |

---

## \<cwctype\>

| Symbol | Type | Description |
|--------|------|-------------|
| `iswalnum` | function | Tests if a wide character is alphanumeric |
| `iswalpha` | function | Tests if a wide character is alphabetic |
| `iswcntrl` | function | Tests if a wide character is a control character |
| `iswctype` | function | Tests a wide character against a locale-specific property |
| `iswdigit` | function | Tests if a wide character is a decimal digit |
| `iswgraph` | function | Tests if a wide character has a graphical representation |
| `iswlower` | function | Tests if a wide character is lowercase |
| `iswprint` | function | Tests if a wide character is printable |
| `iswpunct` | function | Tests if a wide character is punctuation |
| `iswspace` | function | Tests if a wide character is whitespace |
| `iswupper` | function | Tests if a wide character is uppercase |
| `iswxdigit` | function | Tests if a wide character is a hexadecimal digit |
| `towctrans` | function | Applies a locale-specific character mapping to a wide char |
| `towlower` | function | Converts a wide character to lowercase |
| `towupper` | function | Converts a wide character to uppercase |
| `wctrans` | function | Returns a locale-specific character mapping |
| `wctype` | function | Returns a locale-specific character property |
| `wctrans_t` | type | Type for character transformation descriptor |
| `wctype_t` | type | Type for character property descriptor |
| `WEOF` | macro | Wide-character end-of-file indicator |

---

## \<deque\>

| Symbol | Type | Description |
|--------|------|-------------|
| `deque` | class | Double-ended queue; efficient insertion/removal at both ends |
| `swap` | function | Swaps the contents of two deques |
| `operator==`, `!=`, `<`, `>`, `<=`, `>=` | functions | Comparison operators for deque |

---

## \<exception\>

| Symbol | Type | Description |
|--------|------|-------------|
| `exception` | class | Base class for all standard exceptions |
| `bad_exception` | class | Thrown when an unexpected exception occurs |
| `set_terminate` | function | Sets a custom termination handler |
| `set_unexpected` | function | Sets a custom unexpected-exception handler |
| `terminate` | function | Called when exception handling fails; calls terminate handler |
| `unexpected` | function | Called when a function throws an unlisted exception |
| `uncaught_exception` | function | Returns true if exception has been thrown but not caught |
| `terminate_handler` | type | Function pointer type for terminate handler |
| `unexpected_handler` | type | Function pointer type for unexpected handler |

---

## \<fstream\>

| Symbol | Type | Description |
|--------|------|-------------|
| `basic_filebuf` | class | Stream buffer for file I/O |
| `basic_fstream` | class | File stream for both input and output |
| `basic_ifstream` | class | Input file stream |
| `basic_ofstream` | class | Output file stream |
| `filebuf` | type | `basic_filebuf<char>` |
| `fstream` | type | `basic_fstream<char>` — read and write files |
| `ifstream` | type | `basic_ifstream<char>` — read files |
| `ofstream` | type | `basic_ofstream<char>` — write files |
| `wfilebuf` | type | `basic_filebuf<wchar_t>` |
| `wfstream` | type | `basic_fstream<wchar_t>` |
| `wifstream` | type | `basic_ifstream<wchar_t>` |
| `wofstream` | type | `basic_ofstream<wchar_t>` |

**Key member functions** (on `ifstream`/`ofstream`/`fstream`):

| Function | Description |
|----------|-------------|
| `open(filename, mode)` | Opens a file |
| `close()` | Closes the file |
| `is_open()` | Returns true if the file is open |
| `read(buf, n)` | Reads n bytes into buf |
| `write(buf, n)` | Writes n bytes from buf |
| `getline(buf, n)` | Reads up to n-1 characters into buf |
| `good()`, `eof()`, `fail()`, `bad()` | Stream state checks |

---

## \<functional\>

| Symbol | Type | Description |
|--------|------|-------------|
| `unary_function` | struct | Base class for unary function objects |
| `binary_function` | struct | Base class for binary function objects |
| `plus` | struct | Function object for addition (`x + y`) |
| `minus` | struct | Function object for subtraction (`x - y`) |
| `multiplies` | struct | Function object for multiplication (`x * y`) |
| `divides` | struct | Function object for division (`x / y`) |
| `modulus` | struct | Function object for modulo (`x % y`) |
| `negate` | struct | Function object for unary negation (`-x`) |
| `equal_to` | struct | Function object for equality (`x == y`) |
| `not_equal_to` | struct | Function object for inequality (`x != y`) |
| `greater` | struct | Function object for greater-than (`x > y`) |
| `less` | struct | Function object for less-than (`x < y`) |
| `greater_equal` | struct | Function object for greater-or-equal (`x >= y`) |
| `less_equal` | struct | Function object for less-or-equal (`x <= y`) |
| `logical_and` | struct | Function object for logical AND (`x && y`) |
| `logical_or` | struct | Function object for logical OR (`x \|\| y`) |
| `logical_not` | struct | Function object for logical NOT (`!x`) |
| `bind1st` | function | Binds the first argument of a binary function object to a value |
| `bind2nd` | function | Binds the second argument of a binary function object to a value |
| `not1` | function | Returns a negation of a unary predicate |
| `not2` | function | Returns a negation of a binary predicate |
| `ptr_fun` | function | Wraps a function pointer into a function object |
| `mem_fun` | function | Wraps a member function pointer (called via pointer) |
| `mem_fun_ref` | function | Wraps a member function pointer (called via reference) |
| `binder1st` | class | Result type of bind1st |
| `binder2nd` | class | Result type of bind2nd |
| `unary_negate` | struct | Result type of not1 |
| `binary_negate` | struct | Result type of not2 |
| `pointer_to_unary_function` | class | Wraps a unary function pointer |
| `pointer_to_binary_function` | class | Wraps a binary function pointer |

---

## \<iomanip\>

| Symbol | Type | Description |
|--------|------|-------------|
| `resetiosflags(f)` | function | Clears the specified format flags on a stream |
| `setbase(b)` | function | Sets the base (8, 10, or 16) for integer output |
| `setfill(c)` | function | Sets the fill character for padded output |
| `setiosflags(f)` | function | Sets the specified format flags on a stream |
| `setprecision(p)` | function | Sets the floating-point precision for output |
| `setw(n)` | function | Sets the field width for the next output operation |

---

## \<ios\>

| Symbol | Type | Description |
|--------|------|-------------|
| `ios_base` | class | Base class providing format flags, state, and locale |
| `basic_ios` | class | Extends ios_base with character-type-specific stream state |
| `boolalpha` / `noboolalpha` | function | Show/hide booleans as `true`/`false` |
| `showbase` / `noshowbase` | function | Show/hide base prefix (0x, 0) |
| `showpoint` / `noshowpoint` | function | Always show/hide decimal point |
| `showpos` / `noshowpos` | function | Show/hide `+` for positive numbers |
| `skipws` / `noskipws` | function | Skip/don't skip leading whitespace on input |
| `uppercase` / `nouppercase` | function | Use/don't use uppercase for hex digits and exponents |
| `dec` | function | Use decimal base for integers |
| `hex` | function | Use hexadecimal base for integers |
| `oct` | function | Use octal base for integers |
| `fixed` | function | Use fixed-point notation for floats |
| `scientific` | function | Use scientific notation for floats |
| `left` | function | Left-justify output within field width |
| `right` | function | Right-justify output within field width |
| `internal` | function | Right-justify value, left-justify sign/prefix |

---

## \<iostream\>

| Symbol | Type | Description |
|--------|------|-------------|
| `cin` | object | Standard input stream (char) |
| `cout` | object | Standard output stream (char) |
| `cerr` | object | Standard error stream, unbuffered (char) |
| `clog` | object | Standard error stream, buffered (char) |
| `wcin` | object | Standard input stream (wchar_t) |
| `wcout` | object | Standard output stream (wchar_t) |
| `wcerr` | object | Standard error stream, unbuffered (wchar_t) |
| `wclog` | object | Standard error stream, buffered (wchar_t) |

---

## \<istream\>

| Symbol | Type | Description |
|--------|------|-------------|
| `basic_istream` | class | Template base class for input streams |
| `basic_iostream` | class | Template base class for input/output streams |
| `istream` | type | `basic_istream<char>` |
| `iostream` | type | `basic_iostream<char>` |
| `wistream` | type | `basic_istream<wchar_t>` |
| `wiostream` | type | `basic_iostream<wchar_t>` |
| `ws` | function | Skips leading whitespace in an input stream |

---

## \<iterator\>

| Symbol | Type | Description |
|--------|------|-------------|
| `advance` | function | Advances an iterator by N positions |
| `distance` | function | Returns the number of steps between two iterators |
| `back_inserter` | function | Creates a back-insert iterator for a container |
| `front_inserter` | function | Creates a front-insert iterator for a container |
| `inserter` | function | Creates an insert iterator at a specific position |
| `back_insert_iterator` | class | Output iterator that calls push_back |
| `front_insert_iterator` | class | Output iterator that calls push_front |
| `insert_iterator` | class | Output iterator that calls insert |
| `istream_iterator` | class | Input iterator that reads from a stream |
| `ostream_iterator` | class | Output iterator that writes to a stream |
| `reverse_iterator` | class | Iterator adaptor that traverses in reverse |
| `iterator` | struct | Base struct for custom iterators |
| `iterator_traits` | struct | Traits class for iterator properties |
| `input_iterator_tag` | struct | Tag for input iterators |
| `output_iterator_tag` | struct | Tag for output iterators |
| `forward_iterator_tag` | struct | Tag for forward iterators |
| `bidirectional_iterator_tag` | struct | Tag for bidirectional iterators |
| `random_access_iterator_tag` | struct | Tag for random-access iterators |

---

## \<limits\>

| Symbol | Type | Description |
|--------|------|-------------|
| `numeric_limits<T>` | class | Provides compile-time properties for numeric types (min, max, digits, etc.) |
| `float_denorm_style` | enum | Describes how denormalized floats are handled |
| `float_round_style` | enum | Describes rounding style for floating-point |

**Common `numeric_limits<T>` members:**

| Member | Description |
|--------|-------------|
| `min()` | Minimum finite value |
| `max()` | Maximum finite value |
| `digits` | Number of digits in the mantissa |
| `digits10` | Decimal digits of precision |
| `is_integer` | True if T is an integer type |
| `is_signed` | True if T is a signed type |
| `epsilon()` | Difference between 1 and the next representable value |
| `infinity()` | Positive infinity (if applicable) |
| `quiet_NaN()` | A quiet NaN (if applicable) |

---

## \<list\>

| Symbol | Type | Description |
|--------|------|-------------|
| `list` | class | Doubly-linked list; O(1) insertion/removal anywhere |
| `swap` | function | Swaps two lists |
| `operator==`, `!=`, `<`, `>`, `<=`, `>=` | functions | Comparison operators |

**Special list-only member functions:**

| Function | Description |
|----------|-------------|
| `splice(pos, list2)` | Moves all elements of list2 into *this before pos |
| `remove(val)` | Removes all elements equal to val |
| `remove_if(pred)` | Removes all elements satisfying pred |
| `unique()` | Removes consecutive duplicate elements |
| `sort()` | Sorts the list in ascending order |
| `merge(list2)` | Merges another sorted list into this one |
| `reverse()` | Reverses the order of elements |

---

## \<locale\>

| Symbol | Type | Description |
|--------|------|-------------|
| `locale` | class | Represents a set of locale-specific formatting rules |
| `has_facet<F>` | function | Checks if locale has a facet of type F |
| `use_facet<F>` | function | Returns a facet from a locale |
| `codecvt` | class | Facet for code conversion between character encodings |
| `collate` | class | Facet for locale-specific string comparison/ordering |
| `ctype` | class | Facet for character classification and conversion |
| `messages` | class | Facet for locale-specific message retrieval |
| `money_get` | class | Facet for parsing monetary values |
| `money_put` | class | Facet for formatting monetary values |
| `moneypunct` | class | Facet providing monetary punctuation information |
| `num_get` | class | Facet for parsing numeric values |
| `num_put` | class | Facet for formatting numeric values |
| `numpunct` | class | Facet providing numeric punctuation information |
| `time_get` | class | Facet for parsing time/date values |
| `time_put` | class | Facet for formatting time/date values |
| `isalnum`, `isalpha`, ..., `toupper`, `tolower` | functions | Locale-aware character classification/conversion |

---

## \<map\>

| Symbol | Type | Description |
|--------|------|-------------|
| `map` | class | Sorted associative container of unique key-value pairs |
| `multimap` | class | Sorted associative container allowing duplicate keys |
| `operator[]` | function | Accesses or inserts element by key (map only) |
| `find(k)` | function | Returns iterator to element with key k |
| `count(k)` | function | Returns number of elements with key k |
| `insert(v)` | function | Inserts a key-value pair |
| `erase(k)` | function | Removes elements with given key |
| `lower_bound(k)` | function | Iterator to first element >= k |
| `upper_bound(k)` | function | Iterator to first element > k |
| `equal_range(k)` | function | Returns range of elements with key k |
| `swap` | function | Swaps two maps |

---

## \<memory\>

| Symbol | Type | Description |
|--------|------|-------------|
| `allocator` | class | Default memory allocator; manages raw memory |
| `auto_ptr` | class | Simple smart pointer with ownership transfer semantics (deprecated in C++11) |
| `get_temporary_buffer` | function | Allocates a temporary buffer of given size |
| `return_temporary_buffer` | function | Deallocates a buffer from get_temporary_buffer |
| `uninitialized_copy` | function | Copies to uninitialized memory |
| `uninitialized_fill` | function | Fills uninitialized memory with a value |
| `uninitialized_fill_n` | function | Fills N elements of uninitialized memory |
| `raw_storage_iterator` | class | Output iterator that constructs objects in raw storage |

---

## \<new\>

| Symbol | Type | Description |
|--------|------|-------------|
| `operator new` | function | Allocates memory for a single object |
| `operator new[]` | function | Allocates memory for an array of objects |
| `operator delete` | function | Deallocates memory for a single object |
| `operator delete[]` | function | Deallocates memory for an array |
| `set_new_handler` | function | Sets a function called when `new` fails |
| `bad_alloc` | class | Exception thrown on allocation failure |
| `nothrow` | value | Pass to `new` to get nullptr on failure instead of exception |
| `nothrow_t` | struct | Type of the `nothrow` constant |
| `new_handler` | type | Function pointer type for the new handler |

---

## \<numeric\>

| Symbol | Type | Description |
|--------|------|-------------|
| `accumulate` | function | Computes the sum (or other fold) of a range |
| `adjacent_difference` | function | Computes differences between adjacent elements |
| `inner_product` | function | Computes the inner product (dot product) of two ranges |
| `partial_sum` | function | Computes prefix sums of a range |

---

## \<ostream\>

| Symbol | Type | Description |
|--------|------|-------------|
| `basic_ostream` | class | Template base class for output streams |
| `ostream` | type | `basic_ostream<char>` |
| `wostream` | type | `basic_ostream<wchar_t>` |
| `endl` | function | Outputs `'\n'` and flushes the stream |
| `ends` | function | Outputs a null character |
| `flush` | function | Flushes the output stream buffer |

**Key member functions** (inherited by cout, ofstream, etc.):

| Function | Description |
|----------|-------------|
| `put(c)` | Writes a single character |
| `write(buf, n)` | Writes n bytes |
| `flush()` | Flushes the buffer |
| `operator<<` | Formatted output for all built-in types |

---

## \<queue\>

| Symbol | Type | Description |
|--------|------|-------------|
| `queue` | class | FIFO container adaptor; uses deque by default |
| `priority_queue` | class | Container adaptor where largest element is always at top |

**queue member functions:**

| Function | Description |
|----------|-------------|
| `push(v)` | Adds an element to the back |
| `pop()` | Removes the front element |
| `front()` | Returns the front element |
| `back()` | Returns the back element |
| `empty()` | Returns true if empty |
| `size()` | Returns number of elements |

**priority_queue member functions:**

| Function | Description |
|----------|-------------|
| `push(v)` | Adds element and reheapifies |
| `pop()` | Removes the top (largest) element |
| `top()` | Returns the top element |
| `empty()` | Returns true if empty |
| `size()` | Returns number of elements |

---

## \<set\>

| Symbol | Type | Description |
|--------|------|-------------|
| `set` | class | Sorted container of unique elements |
| `multiset` | class | Sorted container allowing duplicate elements |
| `insert(v)` | function | Inserts an element |
| `erase(k)` | function | Removes elements with given value |
| `find(k)` | function | Returns iterator to element k |
| `count(k)` | function | Returns number of occurrences of k |
| `lower_bound(k)` | function | Iterator to first element >= k |
| `upper_bound(k)` | function | Iterator to first element > k |
| `equal_range(k)` | function | Range of elements equal to k |
| `swap` | function | Swaps two sets |

---

## \<sstream\>

| Symbol | Type | Description |
|--------|------|-------------|
| `basic_stringbuf` | class | Stream buffer backed by a string |
| `basic_istringstream` | class | Input stream that reads from a string |
| `basic_ostringstream` | class | Output stream that writes to a string |
| `basic_stringstream` | class | Input/output stream backed by a string |
| `stringbuf` | type | `basic_stringbuf<char>` |
| `istringstream` | type | `basic_istringstream<char>` |
| `ostringstream` | type | `basic_ostringstream<char>` |
| `stringstream` | type | `basic_stringstream<char>` |

**Key member functions:**

| Function | Description |
|----------|-------------|
| `str()` | Returns the internal string |
| `str(s)` | Sets the internal string |

---

## \<stack\>

| Symbol | Type | Description |
|--------|------|-------------|
| `stack` | class | LIFO container adaptor; uses deque by default |

**stack member functions:**

| Function | Description |
|----------|-------------|
| `push(v)` | Adds an element to the top |
| `pop()` | Removes the top element |
| `top()` | Returns the top element |
| `empty()` | Returns true if empty |
| `size()` | Returns number of elements |

---

## \<stdexcept\>

| Symbol | Type | Description |
|--------|------|-------------|
| `logic_error` | class | Base for logic errors detectable before execution |
| `domain_error` | class | Error when input is outside the domain of a function |
| `invalid_argument` | class | Error for invalid argument passed to a function |
| `length_error` | class | Error when a length limit is exceeded |
| `out_of_range` | class | Error when accessing outside valid range |
| `runtime_error` | class | Base for errors detectable only at runtime |
| `overflow_error` | class | Arithmetic overflow |
| `underflow_error` | class | Arithmetic underflow |
| `range_error` | class | Internal computation range error |

---

## \<streambuf\>

| Symbol | Type | Description |
|--------|------|-------------|
| `basic_streambuf` | class | Abstract base class for stream buffers |
| `streambuf` | type | `basic_streambuf<char>` |
| `wstreambuf` | type | `basic_streambuf<wchar_t>` |

---

## \<string\>

| Symbol | Type | Description |
|--------|------|-------------|
| `basic_string` | class | Template class for character strings |
| `string` | type | `basic_string<char>` — the standard string class |
| `wstring` | type | `basic_string<wchar_t>` |
| `getline` | function | Reads a line from a stream into a string |
| `char_traits` | struct | Character traits for string operations |

**string member functions:**

| Function | Description |
|----------|-------------|
| `assign(s)` | Assigns a new value to the string |
| `append(s)` | Appends to the end |
| `insert(pos, s)` | Inserts at a position |
| `erase(pos, len)` | Erases a portion |
| `replace(pos, len, s)` | Replaces a portion |
| `find(s)` | Finds first occurrence of substring |
| `rfind(s)` | Finds last occurrence of substring |
| `find_first_of(s)` | Finds first char matching any in s |
| `find_last_of(s)` | Finds last char matching any in s |
| `find_first_not_of(s)` | Finds first char not matching any in s |
| `find_last_not_of(s)` | Finds last char not matching any in s |
| `substr(pos, len)` | Returns a substring |
| `compare(s)` | Lexicographic comparison |
| `c_str()` | Returns a null-terminated C-string |
| `data()` | Returns a pointer to the character data (not null-terminated) |
| `size()` / `length()` | Returns the number of characters |
| `empty()` | Returns true if the string is empty |
| `clear()` | Erases all characters |
| `resize(n)` | Resizes to n characters |
| `capacity()` | Returns allocated capacity |
| `reserve(n)` | Requests capacity for n characters |
| `operator[]`, `at(pos)` | Character access |
| `operator+=` | Appends another string or character |
| `begin()`, `end()` | Iterators |
| `rbegin()`, `rend()` | Reverse iterators |

---

## \<typeinfo\>

| Symbol | Type | Description |
|--------|------|-------------|
| `type_info` | class | Holds type information; result of `typeid` operator |
| `bad_cast` | class | Exception thrown by failed dynamic_cast |
| `bad_typeid` | class | Exception thrown when typeid is applied to a null pointer |

---

## \<utility\>

| Symbol | Type | Description |
|--------|------|-------------|
| `pair` | struct | Holds two values of (possibly different) types |
| `make_pair(a, b)` | function | Constructs a `pair` without specifying template arguments |
| `operator==`, `!=`, `<`, `>`, `<=`, `>=` | functions | Comparison operators for pair |

---

## \<valarray\>

| Symbol | Type | Description |
|--------|------|-------------|
| `valarray` | class | Array class supporting element-wise math operations |
| `slice_array` | class | Proxy for a slice of a valarray |
| `gslice_array` | class | Proxy for a generalized slice of a valarray |
| `mask_array` | class | Proxy for a boolean-masked subset of a valarray |
| `indirect_array` | class | Proxy for an index-based subset of a valarray |
| `abs`, `exp`, `log`, `log10`, `pow`, `sqrt` | functions | Element-wise math for valarray |
| `sin`, `cos`, `tan`, `asin`, `acos`, `atan`, `atan2` | functions | Element-wise trigonometric functions |
| `sinh`, `cosh`, `tanh` | functions | Element-wise hyperbolic functions |

---

## \<vector\>

| Symbol | Type | Description |
|--------|------|-------------|
| `vector` | class | Dynamic array; random access, efficient back insertion |
| `swap` | function | Swaps two vectors |
| `operator==`, `!=`, `<`, `>`, `<=`, `>=` | functions | Comparison operators |

**vector member functions:**

| Function | Description |
|----------|-------------|
| `push_back(v)` | Appends an element to the end |
| `pop_back()` | Removes the last element |
| `insert(pos, v)` | Inserts at a given position |
| `erase(pos)` | Erases element at position |
| `clear()` | Removes all elements |
| `size()` | Returns number of elements |
| `capacity()` | Returns allocated capacity |
| `reserve(n)` | Pre-allocates memory for n elements |
| `resize(n)` | Resizes to n elements |
| `empty()` | Returns true if vector is empty |
| `front()` | Returns first element |
| `back()` | Returns last element |
| `operator[]`, `at(i)` | Element access |
| `begin()`, `end()` | Iterators |
| `rbegin()`, `rend()` | Reverse iterators |
| `data()` | *(non-standard in C++98, use &v[0])* |

---

*Reference compiled from the C++98 Standard Library (ISO/IEC 14882:1998).*  
*For full signatures and overloads, see [cppreference.com](https://en.cppreference.com) or [cplusplus.com](https://cplusplus.com).*
