#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    swapr(&a, &b);
    printf("a = %d b = %d", a, b);
    printf("\nAddress of a = %p", &a);
    printf("\nAddress of b = %p", &b);
    printf("\nAddress of a = %u", *(&a));
    printf("\nAddress of b = %u\n", *(&b));
}

int swapr(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    return 0;
}