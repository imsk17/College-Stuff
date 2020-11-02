#include <stdio.h>

int main()
{
    int num1, num2, product;
    printf("ENTER TWO INTEGERS: ");
    scanf("%d %d", &num1, &num2);
    product = num1 * num2;
    printf("Product of two numbers: %d\n", product);
    return 0;
}