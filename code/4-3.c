#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    char c = 't';

    while(a >= 2) {
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
    }

    printf("%s", "fail");

    return 0;
}

