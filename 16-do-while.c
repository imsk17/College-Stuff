#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int choice, dummy;
    do
    {
        printf("\n1. Print Hello\n2. Print Javatpoint\n3. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Hello\n");
            break;
        case 2:
            printf("Javatpoint\n");
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("please enter valid choice\n");
        }
        printf("do you want to enter more? (press y)\n");
        scanf("%d", &dummy);
        scanf("%c", &c);
    } while (c == 'y');
    return 0;
}
