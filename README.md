# C — Low-Level Programming

Academic projects from C programming classes.

> ⚠️ University projects — code written for educational purposes.

---

## 📁 Projects

| File | Topic |
|---|---|
| `digits10.c` | Counting decimal digits — two algorithms |
| `zgadnij_liczbe.c` | Number guessing — binary search algorithm |
| `montecarlo.c` | PI approximation — Monte Carlo method |
| `swap_tablica.c` | Array reversal — recursion and pointers |
| `vector.c` | 2D vectors — structs, pointers, scalar operations |
| `stack.c` | Dynamic stack — structs, dynamic memory, realloc |

---
<details>
<summary><strong>📝 Classes 1 — Counting Decimal Digits</strong></summary>

Two implementations of a function counting the number of decimal digits.

### Algorithms

**`digits10_classic`** — classic approach (loop with division by 10)

**`digits10_andrei`** — optimized approach (threshold comparisons + jump every 4 digits)

### Testing
Program tests consistency between both algorithms using random data (`srand()` / `rand()`).

### Example output
```
length of 1234 is 4, classic: 4
length of 1234 is 4, andrei:  4
length of 0 is 1,    classic: 1
length of 0 is 1,    andrei:  1
```
### Inspiration
Andrei algorithm — [Andrei Alexandrescu — Three Optimization Tips for C++](https://youtu.be/o4-CwDo2zpg)

---
</details>
## 📝 Classes 2 — Number Guessing

Program guesses a number chosen by the user in range 0-100.

### Algorithm
Binary search — the program halves the range with each question,
guaranteeing to guess the number in at most 7 steps.

### Example output
```
Is your number greater, lesser or equal to 50? >
Is your number greater, lesser or equal to 75?
Is your number greater, lesser or equal to 62? =
Guessed! Your number is 62
```
### Controls
| Key | Meaning |
|---|---|
| `<` | Your number is smaller |
| `>` | Your number is greater |
| `=` | Correct |

---

## 📝 Classes 3 — PI Approximation (Monte Carlo)

Program approximates the value of PI using the Monte Carlo method.

### Algorithm
Randomly generates points `(x, y)` in range `[0, 1]`. If a point lands
inside the quarter circle (`x² + y² ≤ 1`), it counts as a hit. The ratio
of hits to total points approximates PI/4.

### Example output
```
n=100:      pi ≈ 3.120000
n=1000:     pi ≈ 3.144000
n=10000:    pi ≈ 3.141200
n=1000000:  pi ≈ 3.141460
n=10000000: pi ≈ 3.141573
```
The larger `n`, the more accurate the result.

---

## 📝 Classes 4 — Array Reversal

Program reverses an integer array using recursion and pointers.

### Algorithm
1. If `begin >= end` — stop (array is reversed)
2. Swap elements at `begin` and `end`
3. Call recursively for `begin+1` and `end-1`

### Example output
```
before: 1 2 3 4 5 6 7 8
after:    8 7 6 5 4 3 2 1
```
### Key concepts
- **Pointers** — `*a`, `*b` — direct memory access
- **Recursion** — function calls itself
- **swap** — value exchange via pointers

---

## 📝 Classes 5 — 2D Vector Operations

Implementation of a 2D vector structure with basic mathematical operations.

### Structure
```c
struct vec2 {
    float x;
    float y;
};
```

### Operations
| Function | Description |
|---|---|
| `vec_add(a, b)` | Adds two vectors |
| `vec_sub(a, b)` | Subtracts two vectors |
| `vec_mul(a, scalar)` | Multiplies vector by scalar |
| `vec_move(&target, translation)` | Moves vector in place (modifies original) |
| `vec2_print(v)` | Prints vector in format `(x, y)` |

### Example output
```
a: (1.00, 2.00)
b: (3.00, 4.00)
add: (4.00, 6.00)
sub: (-2.00, -2.00)
mul x3: (3.00, 6.00)
po move: (4.00, 6.00)
```
### Key concepts
- **Structs** — custom data types grouping related values
- **Pointers** — `vec_move` modifies the original via `*target`
- **Scalar multiplication** — scaling a vector by a single value

---

## 📝 Classes 6 — Dynamic Stack

Implementation of a dynamic stack using a struct and dynamic memory allocation.

### Structure
```c
struct stack {
    int *dane;      // pointer to data array
    int  rozmiar;   // current number of elements
    int  pojemnosc; // current array capacity
};
```

### Operations
| Function | Description |
|---|---|
| `stkpush(&s, value)` | Pushes value onto the stack |
| `stkpop(&s)` | Removes top element |
| `stktop(s)` | Returns top element without removing |
| `stklen(s)` | Returns number of elements |
| `stkfree(&s)` | Frees allocated memory |
| `stkprint(s)` | Prints current stack state |

### Example output
```
stos (1 elementów): 10 ← szczyt
stos (2 elementów): 10 20 ← szczyt
stos (3 elementów): 10 20 30 ← szczyt
top: 30
len: 3
stos (2 elementów): 10 20 ← szczyt
stos (1 elementów): 10 ← szczyt
```
### Key concepts
- **Dynamic memory** — `realloc` doubles capacity when stack is full
- **LIFO** — Last In, First Out
- **Memory management** — `stkfree` prevents memory leaks

## Technologies
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)