#include <stdio.h>
#include <math.h>

int main()
{
    int prin, te;
    float si, ci, r, i;
    printf("\nENTER PRINCIPAL: ");
    scanf("%d", &prin);
    printf("\nENTER TIME PERIOD: ");
    scanf("%d", &te);
    printf("\nENTER RATE OF INTEREST: ");
    scanf("%f", &r);
    si = (prin * te * r) / 100;
    i = r / 100;
    ci = prin * pow((1 + i), te);
    printf("\nSIMPLE INTEREST: %0.2f", si);
    printf("\nCOMPOUND INTEREST: %0.2f\n", ci);
    return 0;
}
