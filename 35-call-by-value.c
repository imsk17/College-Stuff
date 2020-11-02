#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    swapv(a, b);
    printf("\na = %d b = %d", a, b);
}

int swapv(int x, int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    printf("\nx = %d y = %d", x, y);
    return 0;
}