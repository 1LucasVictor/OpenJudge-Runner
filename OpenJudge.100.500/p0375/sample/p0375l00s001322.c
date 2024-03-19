#include <stdio.h>

int main(void) {
    
    int i;
    int x;
    int n;

    scanf("%d", &n);
    i = 1;

    // CHECK_NUM:
    do {
        if(i % 3 == 0) {
            printf(" %d", i);
            continue;  // goto END_CHECK_NUM;
        }
        x = i;

        // INCLUDE3:
        do {
            if(x % 10 == 3) {
                printf(" %d", i);
                break; // goto END_CHECK_NUM;
            }
            x /= 10;
        }
        while(x);      //goto INCLUDE3

    }
    // END_CHECK_NUM:
    while(++i <= n);   //goto CHECK_NUM

    printf("\n");

    return 0;
}