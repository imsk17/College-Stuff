/* Usage of pointer to an array */
#include <stdio.h>

main()
{
    int s[4][2] = {
        {4, 56},
        {2, 33},
        {4, 80},
        {2, 78}};
    int(*p)[2];
    int i, j, *pint;
    for (i = 0; i <= 3; i++)
    {
        p = &s[i];
        pint = p;
        printf("\n");
        for (j = 0; j <= 1; j++)
            printf("%d ", *(pint + j));
    }
}