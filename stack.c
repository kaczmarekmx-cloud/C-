#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct stack
{
    int *dane;
    int rozmiar;   // aktualna liczba elementów
    int pojemnosc; // aktualna pojemność tablicy
};

void stkpush(struct stack *p, int value)
{
    // jeśli brak miejsca - podwój pojemność
    if (p->rozmiar == p->pojemnosc)
    {
        p->pojemnosc = p->pojemnosc == 0 ? 1 : p->pojemnosc * 2;
        p->dane = realloc(p->dane, sizeof(int) * p->pojemnosc);
    }
    p->dane[p->rozmiar] = value;
    p->rozmiar++;
}

void stkpop(struct stack *p)
{
    if (p->rozmiar > 0)
    {
        p->rozmiar--;
    }
}

int stktop(struct stack p)
{
    return p.dane[p.rozmiar - 1];
}

int stklen(struct stack p)
{
    return p.rozmiar;
}

void stkfree(struct stack *p)
{
    free(p->dane);
    p->dane = NULL;
    p->rozmiar = 0;
    p->pojemnosc = 0;
}

void stkprint(struct stack s)
{ // funkcja void wywolujaca informacje jak wyglada stos po kazdej przemianie
    printf("stos (%d elementów): ", s.rozmiar);
    for (int i = 0; i < s.rozmiar; i++)
    {
        printf("%d ", s.dane[i]);
    }
    printf("← szczyt\n");
}

int main(void)
{
    struct stack s = {};

    stkpush(&s, 10);
    stkprint(s);
    stkpush(&s, 20);
    stkprint(s);
    stkpush(&s, 30);
    stkprint(s);

    printf("top: %d\n", stktop(s));
    printf("len: %d\n", stklen(s));

    stkpop(&s);
    stkprint(s);
    stkpop(&s);
    stkprint(s);

    return 0;
}