#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double monte_carlo(int n)
{
    int w_kole = 0;
    int w_kwadracie = 0;

    while (n != 0)
    {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        // dzielenie losowej double przez RAND_MAX da nam liczbę między 0 a 1.
        if (x * x + y * y <= 1.0)
        {
            w_kole++;
        }
        w_kwadracie++;
        n--;
    }
    double pi = (4.0 * w_kole) / w_kwadracie;
    return pi;
}
int main(void)
{
    srand((unsigned int)time(NULL));

    printf("n=100:   pi ≈ %f\n", monte_carlo(100));
    printf("n=1000:   pi ≈ %f\n", monte_carlo(1000));
    printf("n=10000:  pi ≈ %f\n", monte_carlo(10000));
    printf("n=1000000: pi ≈ %f\n", monte_carlo(1000000));
    printf("n=10000000: pi ≈ %f\n", monte_carlo(10000000));

    // im większą podamy n tym dokładniejszy wynik pi dostaniemy.
    return 0;
}
