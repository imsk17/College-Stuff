#include <stdio.h>

unsigned long long factorial(unsigned int i)
{
    if (i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}
int main()
{
    int i = 50;
    printf("Factorial of %d is %llu\n", i, factorial(i));
    return 0;
}
