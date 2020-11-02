#include <stdio.h>
int fun()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
        return (ch);
    else
        return (ch + 32);
}
int main()
{
    printf("Returned value is %c\n", fun());
    return 0;
}
