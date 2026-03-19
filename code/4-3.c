#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    char c = 't';

    if (a >= 2) {
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
            c = 'f';
            break;
            }
        }

        if(c == 't') {
            printf("%s", "true");
        } else if(c == 'f') {
            printf("%s", "false");
        }
    } else if(a < 2) {
        printf("%s", "false");
    }
    
    return 0;
}

