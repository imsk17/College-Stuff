#include <stdio.h>

int main()
{
    int A, B, C, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &A, &B, &C);
    largest = A > B ? (A > C ? A : C) : (B > C ? B : C);
    printf("%d is the largest number.\n", largest);
    return 0;
}