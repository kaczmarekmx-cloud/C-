#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int *begin, int *end)
{
    if (begin >= end)
        return;                  // krok 1
    swap(begin, end);            // krok 2
    reverse(begin + 1, end - 1); // krok 3
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("przed: ");
    for (int i = 0; i < 8; i++)
        printf("%d ", nums[i]);

    reverse(nums, nums + 7);

    printf("\npo: ");
    for (int i = 0; i < 8; i++)
        printf("%d ", nums[i]);

    return 0;
}