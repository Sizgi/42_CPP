
Step 1: Understanding Class Templates
What is a class template?

A blueprint for creating classes that work with any data type
Uses the template <typename T> syntax
T is a placeholder for the actual type (int, string, custom classes, etc.)
Key vocabulary:

Template parameter: The T in template <typename T>
Template instantiation: When you create Array<int> or Array<string>
Step 2: Dynamic Memory Allocation
What you need to know:

new[] allocates an array dynamically on the heap
delete[] frees that memory
Default initialization: new T[n] creates n elements with default values
Single element: new T() creates one default-initialized element
Important concept: "Preventive allocation is forbidden" means you should only allocate exactly what's needed, when it's needed.

Step 3: The Constructors You Need
Default constructor (no parameters): Creates empty array (size 0)
Parametric constructor (unsigned int n): Allocates n elements
Copy constructor: Creates a deep copy (separate memory)
Copy assignment operator: Same as copy constructor but returns reference
Deep copy vs Shallow copy:

Shallow: Just copy the pointer (both objects share same memory) ❌
Deep: Allocate new memory and copy values (independent arrays) ✅
Step 4: Operator Overloading
Subscript operator []:

Allows access like array[index]
You need both const and non-const versions
Must check bounds and throw exception if out of range
Assignment operator =:

Must handle self-assignment
Must free old memory before allocating new
Returns reference to *this
Step 5: Member Functions
size() function:

Returns number of elements
Must be const (doesn't modify the object)
Return type: unsigned int
Step 6: Exception Handling
std::exception:

Base class for exceptions
Throw when index is out of bounds
Can use derived classes like std::out_of_range
Step 7: The Rule of Three (or Five)
Since you're managing resources (dynamic memory), you need:

Destructor (~Array())
Copy constructor
Copy assignment operator
Destructor must:

Free allocated memory with delete[]
Prevent memory leaks
Questions to Guide You:
What private members will your Array class need? (Hint: pointer and size)
How will you know how many elements to delete in the destructor?
How do you check if an index is valid before accessing it?
What does "const correctness" mean for the size() function?
File Structure You'll Need:
Array.hpp - Template class declaration and implementation (templates usually go in headers)
main.cpp - Test cases demonstrating all functionality
