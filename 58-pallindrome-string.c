#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    printf("Enter  the string: ");
    gets(s1);
    strcpy(s2, s1);
    strrev(s2);
    if (!strcmp(s1, s2))
        printf("string is palindrome");
    else
        printf("string is not palindrome");
    return 0;
}