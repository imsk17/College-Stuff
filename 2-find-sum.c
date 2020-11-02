#include <stdio.h>

int main()
{
    int num1, num2, sum;
    printf("ENTER TWO INTEGERS: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);
    return 0;
}