# C — Programowanie Niskopoziomowe

Projekty z zajęć akademickich z języka C.

> ⚠️ Projekty uczelniane — kod pisany w celach edukacyjnych.

---

## 📁 Zajęcia

| Plik | Temat |
|---|---|
| `digits10.c` | Liczenie cyfr dziesiętnych — dwa algorytmy |
| `zgadnij_liczbe.c` | Zgadywanie liczby — algorytm binarny |
| `montecarlo.c` | Przybliżenie PI — metoda Monte Carlo |
| `swap_tablica.c` | Odwracanie tablicy — rekurencja i wskaźniki |

---

## 📝 Zajęcia 1 — Liczenie cyfr dziesiętnych

Dwie implementacje funkcji liczącej liczbę cyfr dziesiętnych dla podanej liczby.

### Algorytmy

**`digits10_classic`** — podejście klasyczne (pętla z dzieleniem przez 10)

**`digits10_andrei`** — podejście zoptymalizowane (porównania progowe + skok co 4 cyfry)

### Testowanie
Program testuje spójność obu algorytmów dla losowych danych (`srand()` / `rand()`).

### Przykład działania
```
długość 1234 to 4, a wyszło classic: 4
długość 1234 to 4, a wyszło andrei:  4
długość 0 to 1,    a wyszło classic: 1
długość 0 to 1,    a wyszło andrei:  1
```
### Inspiracja
Algorytm Andrei — [Andrei Alexandrescu — Three Optimization Tips for C++](https://youtu.be/o4-CwDo2zpg)

---


## 📝 Zajęcia 2 — Zgadywanie liczby

Program zgaduje wybraną przez użytkownika liczbę z zakresu 0-100.

### Algorytm
Wyszukiwanie binarne — program dzieli zakres na pół przy każdym pytaniu,
co gwarantuje odgadnięcie liczby w maksymalnie 7 krokach.

### Przykład działania
```
Czy Twoja liczba jest większa, mniejsza lub równa 50? >
Czy Twoja liczba jest większa, mniejsza lub równa 75?
Czy Twoja liczba jest większa, mniejsza lub równa 62? =
Odgadłem! Twoja liczba to 62
```
### Sterowanie
| Znak | Znaczenie |
|---|---|
| `<` | Twoja liczba jest mniejsza |
| `>` | Twoja liczba jest większa |
| `=` | Trafiłem |

---

## 📝 Zajęcia 3 — Przybliżenie liczby PI (Monte Carlo)

Program przybliża wartość liczby PI metodą Monte Carlo.

### Algorytm
Losuje punkty `(x, y)` z zakresu `[0, 1]`. Jeśli punkt trafia w ćwiartkę
koła (`x² + y² ≤ 1`), zaliczany jest jako trafiony. Stosunek trafionych
do wszystkich punktów przybliża PI/4.

### Przykład działania
```
n=100:      pi ≈ 3.120000
n=1000:     pi ≈ 3.144000
n=10000:    pi ≈ 3.141200
n=1000000:  pi ≈ 3.141460
n=10000000: pi ≈ 3.141573
```
Im większe `n` tym dokładniejszy wynik.

---

## 📝 Zajęcia 4 — Odwracanie tablicy

Program odwraca tablicę liczb całkowitych używając rekurencji i wskaźników.

### Algorytm
1. Jeśli `begin >= end` — zakończ (tablica odwrócona)
2. Zamień miejscami elementy `begin` i `end`
3. Wywołaj rekurencyjnie dla `begin+1` i `end-1`

### Przykład działania

```
przed: 1 2 3 4 5 6 7 8
po:    8 7 6 5 4 3 2 1
```
### Kluczowe koncepty
- **Wskaźniki** — `*a`, `*b` — bezpośredni dostęp do pamięci
- **Rekurencja** — funkcja wywołuje samą siebie
- **swap** — zamiana wartości przez wskaźniki

---