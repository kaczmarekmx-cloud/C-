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

---

## 📝 Classes 1 — Counting Decimal Digits

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

## Technologies
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)