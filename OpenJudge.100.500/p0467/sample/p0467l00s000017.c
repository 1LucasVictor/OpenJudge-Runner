#include<stdio.h>
int main(void){
    long int a, b, c, k;
    int ans=0;
    scanf("%ld%ld%ld%ld", &a, &b, &c, &k);
    while(a>0 && k>0){
        ans+=1;
        a-=1;
        k-=1;
    }
    while(b>0 && k>0){
        b-=1;
        k-=1;
    }
    while(c>0 && k>0){
        ans-=1;
        c-=1;
        k-=1;
    }
    printf("%d\n", ans);
    return 0;
}