#include <stdio.h>
#include <math.h>
int main(void){
    int n,d,i,r;
    r = 1;
    scanf("%d",&d);
    scanf("%d",&n);
    for(i = 0;i < d;i++){
        r *= 10;
    }
    printf("%d",r*n);
    return 0;
}