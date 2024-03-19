#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
    int H,N,A,SUM=0;
    scanf("%d %d",&H,&N);
    for (int i=0; i<N; i++) {
        scanf("%d",&A);
        SUM+=A;
    }
    if (SUM<H) {
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
    return 0;
}