#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < 4; i++)
    {
        int a;
        a = n % 10;
        n = n / 10;
        sum += a;
    }
    printf("sum of digits is %d\n", sum);
    return 0;
}
