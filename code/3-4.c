#include <stdio.h>

int main()
{
    int a,b,c;
    printf("%d %d %d\n", a, b, c);

    a = 2 + 3 * 4;
    prinf("%d %d %d\n", a, b, c);

    c = a++ + ++b;
    prinf("%d %d %d\n", a, b, c);

    return 0;
}

