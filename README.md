# C — Programowanie Niskopoziomowe

Projekty z zajęć akademickich z języka C.

> ⚠️ Projekty uczelniane — kod pisany w celach edukacyjnych.

---

## 📁 Zajęcia

| Plik | Temat |
|---|---|
| `digits10.c` | Liczenie cyfr dziesiętnych — dwa algorytmy |
| `zgadnij_liczbe.c` | Zgadywanie liczby — algorytm binarny |

---

## 📝 Zajęcia 1 — Liczenie cyfr dziesiętnych

Dwie implementacje funkcji liczącej liczbę cyfr dziesiętnych dla podanej liczby.

### Algorytmy

**`digits10_classic`** — podejście klasyczne (pętla z dzieleniem przez 10)

**`digits10_andrei`** — podejście zoptymalizowane (porównania progowe + skok co 4 cyfry)

### Testowanie
Program testuje spójność obu algorytmów dla losowych danych (`srand()` / `rand()`).

### Przykład działania

długość 1234 to 4, a wyszło classic: 4
długość 1234 to 4, a wyszło andrei:  4
długość 0 to 1,    a wyszło classic: 1
długość 0 to 1,    a wyszło andrei:  1

### Inspiracja
Algorytm Andrei — [Andrei Alexandrescu — Three Optimization Tips for C++](https://youtu.be/o4-CwDo2zpg)

---

## Technologie
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

## 📝 Zajęcia 2 — Zgadywanie liczby

Program zgaduje wybraną przez użytkownika liczbę z zakresu 0-100.

### Algorytm
Wyszukiwanie binarne — program dzieli zakres na pół przy każdym pytaniu,
co gwarantuje odgadnięcie liczby w maksymalnie 7 krokach.

### Przykład działania

Czy Twoja liczba jest większa, mniejsza lub równa 50? >
Czy Twoja liczba jest większa, mniejsza lub równa 75?
Czy Twoja liczba jest większa, mniejsza lub równa 62? =
Odgadłem! Twoja liczba to 62

### Sterowanie
| Znak | Znaczenie |
|---|---|
| `<` | Twoja liczba jest mniejsza |
| `>` | Twoja liczba jest większa |
| `=` | Trafiłem |