#include<stdio.h>
int main(void){
    int A,B;
    int T;
    int ans;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&T);
    T=T/A;
    ans=T*B;
    printf("%d",ans);
    return 0;
}