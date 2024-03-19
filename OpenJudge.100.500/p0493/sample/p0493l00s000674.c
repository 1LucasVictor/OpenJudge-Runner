#include <stdio.h>

int main(void){
    int x;
    scanf("%d", &x);

    int q,r;
    q=x/500;
    r=x%500;
    r=r/5;
    int happy=0;
    happy=q*1000+r*5;
    printf("%d\n", happy);

    return 0;
}
