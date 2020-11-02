#include <stdio.h>

extern int a, b;
extern int c;
extern float f;
extern char x;
extern short s;

int main()
{
    int a, b;
    int c;
    float f;
    short s = 5;
    char x = 'a';
    a = 10;
    b = 20;
    c = a + b;
    printf("value of c: %d\n", c);
    f = 70.0 / 3.0;
    printf("value of f: %f\n", f);
    printf("value of s: %d\n", s);
    printf("value of x: %c\n", x);
    return 0;
}
