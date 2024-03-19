#include <stdio.h>

int main(){
    int D,N,a=1,i;
    scanf("%d", &D);
    scanf("%d", &N);
    for(i=0;i<D;i++){
        a *= 100;
    }
    printf("%d", a*N);
    return 0;
}