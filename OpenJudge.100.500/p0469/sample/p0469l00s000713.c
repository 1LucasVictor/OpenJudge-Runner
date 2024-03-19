#include <stdio.h>

int main(){
    int K,A,B;
    scanf("%d",&K);
    scanf("%d %d",&A,&B);
    if(B-A+1 >= K) printf("OK\n");
    else printf("NG\n");
    return 0;
}