#include <stdio.h>

int main()
{
    int n1, n2, n3;
    float avg;
    printf("\033[2J"); // Replacement for clrscr(). Doesnt need MS-DOS Era's `conio.h`
    printf("\n ENTER THREE NUMBERS: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    avg = (n1 + n2 + n3) / 3;
    printf("\nAVERAGE: %0.2f\n", avg);
    return 0;
}
