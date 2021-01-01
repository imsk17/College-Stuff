// WAP to find length of the string using library function
#include <stdio.h>
int main()
{
    char arr[] = "Computer C programming";
    int len1, len2;
    len1 = strlen(arr);
    len2 = strlen("Hello");
    printf("\nstring = %s length = %d", arr, len1);
    printf("\nstring = %s length = %d", "Hello", len2);
    return 0;
}