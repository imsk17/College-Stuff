#include <stdio.h>
int main()
{
    int arr[5], i;
    arr[4] = 2;
    arr[2] = 17;
    arr[0] = 17;
    printf("Array elements are: ");
    for (i = 0; i < 5; i++)
    {
        printf(("%d\n"), arr[i]);
    }
    return 0;
}