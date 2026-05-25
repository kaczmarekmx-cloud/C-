# C — Programowanie Niskopoziomowe

Projekty z zajęć akademickich z języka C.

> ⚠️ Projekty uczelniane — kod pisany w celach edukacyjnych.

---

## 📁 Zajęcia

| Plik | Temat |
|---|---|
| `digits10.c` | Liczenie cyfr dziesiętnych — dwa algorytmy |

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