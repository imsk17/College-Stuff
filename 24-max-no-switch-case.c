#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);
    switch (n1 > n2)
    {
    case 1:
        printf("%d is greater than %d\n", n1, n2);
    case 0:
        printf("%d is greater than %d\n", n2, n1);
        return 0;
    }
}
