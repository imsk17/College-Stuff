#include <stdio.h>

int main()
{
    int i = 3;
    int *j;
    j = &i;
    printf("Address of i = %p", &i);
    printf("\nAddress of i = %p", j);
    printf("\nAddress of j = %p", &j);
    printf("\nValue of j = %p", j);
    printf("\nValue of i = %d", i);
    printf("\nValue of i = %d", *(&i));
    printf("\nValue of i = %d\n", *j);
    return 0;
}
