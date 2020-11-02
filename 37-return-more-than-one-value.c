#include <stdio.h>

int main()
{
    int radius;
    float area, perimeter;
    printf("\nEnter radius of a circle ");
    scanf("%d", &radius);
    areaperi(radius, &area, &perimeter);
    printf("Area = %f", area);
    printf("\nPerimeter = %f", perimeter);
    printf("\nAddress of area = %p", &area);
    printf("\nAddress of perimeter = %p\n", &perimeter);
}
int areaperi(int r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
    return 0;
}
