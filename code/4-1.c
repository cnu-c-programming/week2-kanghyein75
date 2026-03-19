#include <stdio.h>

int main()
{
    int a;
    int b;
    char c;
    
    scanf("%d %d %c", &a, &b, &c);

    if (c == '+') {
        printf("%d\n", a+b);
    } else if (c == '-') {
        prinf("%d\n", a-b);
    } else if (c == '*') {
        prinf("%d\n", a*b);
    } else if (c == '/') {
        prinf("%d\n", a/b);
    }

    return 0;
}

