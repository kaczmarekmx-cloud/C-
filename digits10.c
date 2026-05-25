#include <stdio.h>
#include <locale.h>
unsigned digits10_classic(unsigned number)
{
    if (number == 0)
    {
        return 1;
    }
    unsigned int licznik = 0;
    while (number != 0)
    {
        licznik++;
        number /= 10;
    }
    return licznik;
}
unsigned digits10_andrei(unsigned number)
{
    unsigned int licznik = 0;
    for (;;)
    {
        if (number < 10)
            return licznik;
        if (number < 100)
            return licznik + 1;
        if (number < 1000)
            return licznik + 2;
        if (number < 10000)
            return licznik + 3;
        number /= 1000;
        licznik += 4;
    }
}
int main()
{
    printf("długość 1234 to 4, a wyszło classic: %d\n", digits10_classic(1234));
    printf("długość 1234 to 4, a wyszło andrei: %d\n", digits10_andrei(1234));
    printf("długość 0 to 1, a wyszło classic: %d\n", digits10_classic(0));
    printf("długość 0 to 1, a wyszło andrei: %d\n", digits10_andrei(0));
    // ...
}