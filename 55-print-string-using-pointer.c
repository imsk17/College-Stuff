// WAP to print a string using pointer
#include <stdio.h>
int main()
{
    char str[] = "Computer programming";
    char *ptr;
    ptr = str; /* store base address of string */
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}