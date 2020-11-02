#include <stdio.h>
int main()
{
    int marks;
    for (int i = 1; i <= 6; i++)
    {
        printf("Enter your marks %d : ", i);
        scanf("%d", &marks);
        switch (marks / 10)
        {
        case 5: /*for range of marks: 50-59*/
            printf("GRADE D\n");
            break;
        case 6: /*for range of marks: 60-69*/
            printf("GRADE C\n");
            break;
        case 7: /*for range of marks: 70-79*/
            printf("GRADE B\n");
            break;
        case 8: /*for range of marks: 80-89*/
            printf("GRADE A\n");
            break;
        case 9: /*for range of marks: 90-99*/
            printf("GRADE A+\n");
            break;
        case 10: /* Impossible */
            printf("IMPOSSIBLE\n");
            break;
        default: /*for range of marks: 0-49*/
            printf("FAIL\n");
            return 0;
        }
    }
}