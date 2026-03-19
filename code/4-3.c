#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    char c = 't';

    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            c = 'f';
            break;
        }
    }

    if(c == 't') {
        printf("%s", "ture");
    } else if(c == 'f') {
        printf("%s", "false");
    }

    return 0;
}

