// WAP to print multi word string using gets() and puts() function
#include <stdio.h>
int main()
{
    char name[25];
    printf("Enter your full name ");
    gets(name);
    puts("Hello!");
    puts(name);
    return 0;
}