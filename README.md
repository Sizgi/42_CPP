# 42 Vienna — C++ Modules (00 - 09)

This repository contains the complete **C++ Module Series** from the **42 Vienna Common Core curriculum**. The curriculum is designed as a rigorous, hands-on deep dive into the **Object-Oriented Programming (OOP)** paradigm, memory management, and advanced software engineering principles using **C++98** standards.

---

## 📌 Technical Breakdown of the Curriculum

### 🔹 Modules 00 - 01: Foundations & Memory Allocation
* **Core Content:** classes, member functions, streams, and basic syntax.
* **What it teaches:** Shifting from procedural C to object-oriented thinking. It covers deep vs. shallow copies, dynamic memory allocation (`new`/`delete`), references, pointers to members, and clean file handling.

### 🔹 Module 02: Ad-hoc Polymorphism & Fixed-Point Numbers
* **Core Content:** Implementation of a custom fixed-point number class.
* **What it teaches:** Mastery of operator overloading and strict compliance with the **Orthodox Canonical Class Form** (OCCF), ensuring every class handles initialization and destruction safely.

### 🔹 Module 03: Inheritance & Encapsulation
* **Core Content:** Building structured class hierarchies.
* **What it teaches:** Designing reusable architecture using public, protected, and private inheritance. It deep dives into constructor/destructor chaining and preventing variable shadowing.

### 🔹 Module 04: Subtype Polymorphism & Abstract Classes
* **Core Content:** Virtual functions and interfaces.
* **What it teaches:** Pure runtime polymorphism. It focuses on abstract classes, interfaces, and the critical importance of **virtual destructors** to prevent massive memory leaks when deleting derived objects via base pointers.

### 🔹 Modules 05 - 06: Exception Handling & Type Casting
* **Core Content:** Robust error management and explicit data conversion.
* **What it teaches:** How to design hierarchical custom exceptions to replace unsafe return-value error handling. It also demystifies safe C++ type casting (`static_cast`, `dynamic_cast`, `reinterpret_cast`).

### 🔹 Modules 07 - 08: Generic Programming & STL Containers
* **Core Content:** Function/class templates and the Standard Template Library (STL).
* **What it teaches:** Writing reusable, type-independent code via templates. It introduces STL containers (`std::vector`, `std::list`, `std::map`), iterators, and generic algorithms, focusing on picking the right data structure for the right job.

### 🔹 Module 09: Advanced STL & Algorithmic Efficiency
* **Core Content:** Complex data parsing, mathematical processing, and algorithm optimization.
* **What it teaches:** Performance constraints and optimization. Exercises include building expression parsers (like Reverse Polish Notation) and sorting algorithms, enforcing strict time-complexity boundaries and algorithmic efficiency.

---

## 🛠️ Key Engineering Practices Learned

* **RAII (Resource Acquisition Is Initialization):** Ensuring that resource management (memory, files) is strictly bound to object lifecycles, completely eliminating memory leaks.
* **The Orthodox Canonical Class Form:** Ensuring every single class is robustly defined with a default constructor, copy constructor, copy assignment operator, and destructor.
* **Rigorous Testing:** Designing comprehensive edge-case main files to stress-test software stability, handle malicious/bad inputs gracefully, and ensure robust production-ready code.

---
*Note: This repository preserves historical commit data migrated from private development repositories via Git Subtree.*
