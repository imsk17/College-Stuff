#include <stdio.h>
int main()
{
    float temp_c, temp_f;
    printf("Enter the value of Temperature in Celsius: ");
    scanf("%f", &temp_c);
    temp_f = (1.8 * temp_c) + 32;
    printf("The Temperature in Fahrenheit is: %f\n", temp_f);
    return 0;
}
