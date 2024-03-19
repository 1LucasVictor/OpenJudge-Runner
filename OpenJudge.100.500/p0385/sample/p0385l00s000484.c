#include<stdio.h>

int main(void)
{
    int i, sum;
    char c;
    
    while (1) {
        sum = 0;
        for ( i=0; (c=getchar()) != '\n'; ++i) {
            if ( i == 0 && c == '0') /* 入力が 0 だった */
                return 0;
            sum += c - '0';
        }
        printf("%d\n", sum);
    }
    return 0;
}
