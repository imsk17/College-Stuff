#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, ar;
    printf("Enter side of a square: ");
    scanf("%f", &a);
    ar = a * a;
    printf("Area of the square is: %0.2f\n", ar);
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &a, &b);
    ar = a * b;
    printf("Area of rectangle is: %0.2f\n", ar);
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &a, &b);
    ar = a * b / 2;
    printf("Area of triangle is: %0.2f\n", ar);
    return 0;
}