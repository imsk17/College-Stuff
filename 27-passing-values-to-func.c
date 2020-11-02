#include <stdio.h>

int main()
{
    int a, b, c;
    printf("\nEnter any three numbers ");
    scanf("%d %d %d", &a, &b, &c);
    int sum = calsum(a, b, c);
    printf("\nSum = %d\n", sum);
    return 0;
}
int calsum(int x, int y, int z)
{
    int d;
    d = x + y + z;
    return d;
}
