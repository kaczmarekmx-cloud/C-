#include <stdio.h>

struct vec2
{
    float x;
    float y;
};

struct vec2 vec_add(struct vec2 a, struct vec2 b)
{
    struct vec2 wynik;
    wynik.x = a.x + b.x;
    wynik.y = a.y + b.y;
    return wynik;
} //+dodający dwa wektory

void vec_move(struct vec2 *target, struct vec2 translation)
{
    (*target).x += translation.x;
    (*target).y += translation.y;
} // funkcja która modyfikuje oryginał poprzez przesunięcie wektora

struct vec2 vec_sub(struct vec2 a, struct vec2 b)
{
    struct vec2 wynik;
    wynik.x = a.x - b.x;
    wynik.y = a.y - b.y;
    return wynik;
} //- odejmujący dwa wektory

struct vec2 vec_mul(struct vec2 a, float scalar)
{
    struct vec2 wynik;
    wynik.x = a.x * scalar;
    wynik.y = a.y + scalar;
    return wynik;
} // mnożący wektor przez skalar

void vec2_print(struct vec2 v)
{
    printf("(%.2f, %.2f)\n", v.x, v.y);
} //- wypisuje vector w formacie "(x, y)" gdzie x i y to odpowiednie wartości pól

int main()
{
    struct vec2 a = {1.0, 2.0};
    struct vec2 b = {3.0, 4.0};

    printf("a: ");
    vec2_print(a);
    printf("b: ");
    vec2_print(b);
    printf("add: ");
    vec2_print(vec_add(a, b));
    printf("sub: ");
    vec2_print(vec_sub(a, b));
    printf("mul x3: ");
    vec2_print(vec_mul(a, 3.0));

    vec_move(&a, b);
    printf("po move: ");
    vec2_print(a); // wywołujemy A ponieważ jest wartością target. B to translation ktore przesuwamy do target.

    return 0;
}