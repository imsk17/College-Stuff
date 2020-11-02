#include <stdio.h>
int main()
{
    float square(float);
    float a, b;
    printf("Enter any number: ");
    scanf("%f", &a);
    b = square(a);
    printf("\nSquare of %f is %f\n", a, b);
    return 0;
}
float square(float x)
{
    float y;
    y = x * x;
    return (y);
}