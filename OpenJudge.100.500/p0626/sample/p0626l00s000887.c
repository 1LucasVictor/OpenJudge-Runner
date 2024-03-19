#include <stdio.h>
int main(void){
    int n,d,i,r;
    r = 1;
    scanf("%d",&d);
    scanf("%d",&n);
    for(i = 0;i < d;i++){
        r *= 100;
    }
    if(n == 100){
        printf("%d",r*(n+1));
        return 0;
    }
    printf("%d",r*n);
    return 0;
}