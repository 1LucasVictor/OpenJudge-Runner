#include<stdio.h>

int main(void)
{
    int i, j, judge=0;
    int X, Y;

    scanf("%d", &X);
    scanf("%d", &Y);

    for(i=0; i<=X; i++) {
        for(j=0; j<=X-i; j++){
            if(i*2 + j*4 == Y) {
                judge = 1;
                break;
            }
        }
        if(judge == 1) {
            break;
        }
    }
    if (i==0 && j==0) {
        judge = 0;
    }

    if (judge == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}