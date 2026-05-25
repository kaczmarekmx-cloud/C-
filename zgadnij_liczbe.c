#include <stdio.h>

int main()
{
    int dol = 0, gora = 100;

    printf("wybierz liczbę od 0 do 100\n");
    printf("Odpowiadaj: < (mniejsza), > (większa), = (równa)\n\n");

    while (dol <= gora)
    {
        int srodek = (dol + gora) / 2;

        printf("Czy Twoja liczba jest większa, mniejsza lub równa %d? ", srodek);

        char odpowiedz;
        scanf(" %c", &odpowiedz);

        if (odpowiedz == '=')
        {
            printf("Odgadłem! Twoja liczba to %d\n", srodek);
            return 0;
        }
        else if (odpowiedz == '>')
        {
            dol = srodek + 1;
        }
        else if (odpowiedz == '<')
        {
            gora = srodek - 1;
        }
        else
        {
            printf("Nieznana odpowiedź, użyj < = >\n");
        }
    }

    printf("Nie ma takiej liczby w zakresie.\n");
    return 0;
}