#include <stdio.h>

int main()
{
    int i = 3;
    int j = 6;
    printf("Address of i = %p", &i);
    printf("\nValue of i = %d", i);
    printf("\nValue of i = %d", *(&i));
    printf("\nAddress of j = %p", &j);
    printf("\nValue of j = %d", j);
    printf("\nValue of j = %d\n", *(&j));
    return 0;
}
