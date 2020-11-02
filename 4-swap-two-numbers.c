#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the values of A = ");
    scanf("%d", &a);
    printf("Enter the value of B = ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping A = %d\n", a);
    printf("after swapping B = %d\n", b);
    return 0;
}