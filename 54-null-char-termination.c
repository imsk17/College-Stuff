// WAP to print a string using null character string termination
#include <stdio.h>
int main()
{
    char name[] = "Computer";
    int i = 0;
    while (name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
    return 0;
}